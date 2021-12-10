
#include <iostream>
using namespace std;

class Rectangle
{
// private:
protected:
	int width;
	int length;



public:
	Rectangle() : width(0), length(0){};
	Rectangle(int w, int h) : width(w), length(h) {}
	int getArea()
	{
		return width * length;
	}
	int perimeter()
	{
		return (2 * width + 2 * length);
	}
};


class Square : public Rectangle // 
// class Square : protected Rectangle // 
{
public:
	Square() : Rectangle() {}
	Square(int w) : Rectangle(w, w) { cout << "Constructor" << width << endl; }
};


int main()
{
	Square s(10);

	cout << " Area " << s.getArea() << endl;
	cout << " Perimter " << s.perimeter() << endl;

}


