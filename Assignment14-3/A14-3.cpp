#include <iostream>
#include "A14-3.hpp"

using namespace std;

int main() {
  Square s;
  s.setWidth(20);

  Rect r;
  r.makeRectangleWithSquare(s);

  cout << "Width: " << r.getWidth() << endl;

  cout << "Height: " << r.getHeight() << endl;

  cout << "Area: " << r.getArea() << endl;

  return 0;
}