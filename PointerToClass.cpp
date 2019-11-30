#include <iostream>
using namespace std;

class Rectangle{
private:
  int width, height;

public:
  Rectangle(int x, int y): width(x), height(y) {}
  int area(){ return width* height; }
};

int main(int argc, char const *argv[]) {
  Rectangle object(3,4);
  Rectangle *lorem, *ipsum, *dolor;

  lorem = &object;
  ipsum = new Rectangle (5,6);
  dolor = new Rectangle [2] { {10,20}, {35,14} };

  std::cout << "Object's Area: " << object.area() << '\n';
  std::cout << "Lorem's Area: " << lorem->area() << '\n';
  std::cout << "Ipsum's Area: " << ipsum->area() << '\n';
  std::cout << "Dolor[0]'s Area: " << dolor[0].area() << '\n';
  std::cout << "Dolor[0]'s Area: " << dolor->area() << '\n';
  std::cout << "Dolor[1]'s Area: " << dolor[1].area() << '\n';

  delete ipsum;
  delete[] dolor;

  return 0;
}
