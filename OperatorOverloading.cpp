// Operator Overloading Example
#include <iostream>
using namespace std;

class CVector {
public:
  int x,y;
  CVector () {};
  CVector (int a, int b): x(a), y(b) {}

  // Operators are overloaded by means of operator functions, which are regular functions with special names:
  // their name begins by the operator keyword followed by the operator sign that is overloaded.
  CVector operator+(const CVector add){
    CVector temp;
    temp.x = x + add.x;
    temp.y = y + add.y;
    return temp;
  }
};

int main(int argc, char const *argv[]) {
  CVector v1 (10,23);
  CVector v2 (12,55);
  CVector result = v1 + v2;
  std::cout << result.x << " , " << result.y <<'\n';
  return 0;
}
