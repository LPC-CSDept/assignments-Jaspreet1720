#include <iostream>
using namespace std;

class Rectangle
{
private:
	int width;
	int height;

public:
	Rectangle() : width(0), height(0)  {  }
	Rectangle(int w, int h) : width(w), height(h)  { }
	~Rectangle()
	{
		cout << "Destructor called\n";
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

	Rectangle r2(10,20);
	cout << "W " << r2.getWidth() << endl;
	cout << "H " << r2.getHeight() << endl;


}

