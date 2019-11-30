#include <iostream>
using namespace std;

class Circle {
private:
  double radius;
public:
  Circle (double r): radius(r) {}
  double area() {return 3.1415926535898 * radius * radius; }
};

class Cylinder {
private:
  Circle base;
  double height;

public:
  Cylinder (double r, double h): base(r), height(h) {}
  double volume (){ return base.area() * height; }
};

int main(int argc, char const *argv[]) {
  Cylinder c1 (10,35);
  std::cout << "Cylinder volume: " << c1.volume() << " cube units" <<'\n';
  return 0;
}
