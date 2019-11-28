#include <iostream>

class Rectangle{
public:
  int width;
  int height;
};

int main(int argc, char const *argv[]) {
  Rectangle x,y;

  x.width = 10;
  x.height = 12;

  std::cout << x.width << '\n';

  y.width = 10;
  y.height = 20;

  return 0;
}
