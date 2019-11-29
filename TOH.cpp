#include <iostream>

using namespace std;

inline void TOH(int disks, int from, int aux, int to) {
  if (disks == 1) {
    std::cout << "Move top disk from " << from << "to" << to << '\n';
  }
  else{
    TOH(disks-1,from,to,aux);
    std::cout << "Move top disk from " << from << "to" << to << '\n';
    TOH(disks-1,aux,from,to);
  }
}

int main(int argc, char const *argv[]) {
  TOH(3,1,2,3);
  return 0;
}
