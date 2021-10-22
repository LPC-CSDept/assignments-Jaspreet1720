#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle()
	{
		width = 0;
		height = 0;
	}
	int getWidth() const { return width; };
	int getHeight() const { return height; };
	int getArea() const { return width * height; };
	void setWidth(int w) { width = w; };
	void setHeight(int h) { height = h; };
};

int main()
{
	Rectangle r1; // constructor is called automatically
	
	cout << "W " << r1.getWidth() << endl;
	cout << "H " << r1.getHeight() << endl;

}
