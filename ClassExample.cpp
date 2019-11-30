#include <iostream>
using namespace std;

class Rectangle{
private:
  int width,height;

public:
  Rectangle() {width = 0;height = 0;}
  Rectangle(int a,int b){ width = a;height = b;}
  void setValue(int, int);
  int getWidth(){ return width; }
  int getHeight(){ return height; }
  int area(){ return width*height; }
};

void Rectangle::setValue(int a, int b){
  width = a;
  height = b;
}

int main(int argc, char const *argv[]) {
  Rectangle rect;
  rect.setValue(3,4);
  std::cout << "Width of the Rectangle: " << rect.getWidth() << '\n';
  std::cout << "Height of the Rectangle: " << rect.getHeight() << '\n';
  std::cout << "Area of Rectangle: " << rect.area() << '\n';

  Rectangle rect2 (5,6);
  std::cout << "Width of the Rectangle2: " << rect2.getWidth() << '\n';
  std::cout << "Height of the Rectangle2: " << rect2.getHeight() << '\n';
  std::cout << "Area of Rectangle2: " << rect2.area() << '\n';


  return 0;
}
