#include <iostream>
#include <thread>
using namespace std;

class Fctor {
private:
  /* data */

public:
  void operator()(string &s){
    std::cout << "From Thread: "<< s << '\n';
    s = "Love Coding... Not the output.";
  }
};

int main(int argc, char const *argv[]) {
  string msg = "Code, compile, run, repeat.";
  thread t1((Fctor()),msg);
  t1.join();
  std::cout << "From main: "<< msg << '\n';

  thread t2((Fctor()),std::ref(msg));
  t2.join();
  std::cout << "From Main: " << msg << '\n';
  return 0;
}
