#include <iostream>
#include <list>

using namespace std;

void showList(list <int> L){
  list <int> :: iterator it;

  for (it = L.begin() ; it != L.end() ; ++it){
      std::cout << *it << '\t';
  }
  std::cout << '\n';
}

int main(int argc, char const *argv[]) {
  list <int> x[2];

  for (size_t i = 0; i < 10; i++) {
    x[0].push_back(i*2);
    x[1].push_front(i*3);
  }

  std::cout << "List X[0] is: " << '\n';
  showList(x[0]);

  std::cout << "List X[1] is: " << '\n';
  showList(x[1]);

  std::cout << "List X[0] after removing last element:" << '\n';
  x[0].pop_back();
  showList(x[0]);

  std::cout << "Reversing List X[1]" << '\n';
  x[1].reverse();
  showList(x[1]);

  std::cout << "Sorting X[0]" << '\n';
  x[0].sort();
  showList(x[0]);

  return 0;
}
