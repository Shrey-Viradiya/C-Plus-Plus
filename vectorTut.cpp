#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  std::cout << "Tut1____________________" << '\n';
  std::vector<int> v;

  for (size_t i = 0; i < 5; i++) {
    v.push_back(i);
  }

  std::cout << v.size() << '\n';
  std::cout << v.capacity() << '\n';
  std::cout << v.max_size() << '\n';

  v.resize(4);

  std::cout << v.size() << '\n';

  v.shrink_to_fit();
  for(auto it = v.begin() ; it!=v.end(); it++){
    std::cout << *it << '\n';
  }

  std::cout << "Tut2____________________" << '\n';

  vector<int> g1;

    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);

    cout << "\nReference operator [g] : g1[2] = " << g1[2];

    cout << "\nat : g1.at(4) = " << g1.at(4);

    cout << "\nfront() : g1.front() = " << g1.front();

    cout << "\nback() : g1.back() = " << g1.back();

    // pointer to the first element
    int* pos = g1.data();

    cout << "\nThe first element is " << *pos; 
  return 0;
}
