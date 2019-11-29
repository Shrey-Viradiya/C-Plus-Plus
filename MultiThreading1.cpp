#include <iostream>
#include <thread>
using namespace std;

void function_1(){
  for (size_t i = 0; i < 100; i++) {
    std::cout << "This is multithreading function_1" << '\n';
  }
}

class Fctor {
private:
  /* data */

public:
  void operator()(){
    for (size_t i = 0; i > -100; --i)
      std::cout << "From Thread: " << i << '\n';
  }
};

int main(int argc, char const *argv[]) {
  thread t1((Fctor()));

  try{
  for (size_t i = 0; i < 100; i++)
    std::cout << "From Main" << i << '\n';
  }  catch(...){
    t1.join();
    throw;
  }

  t1.join();

  return 0;
}
