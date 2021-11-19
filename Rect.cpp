#include <iostream>
using namespace std;

class Rect
{
	private:
		int width;
		int height;
	public:
		Rect(): width(0), height(0) {}
		Rect(int w, int h) : width(w), height(h) {} 
		int getArea()
		{
			return width * height;
		}
		int getWidth() { return width;}
        int getHeight() {return height;}
		int operator>(Rect &r)
        {
            // int a1 = 0, a2 = 0;
            // a1 = this->getArea();
            // a2 = r.getArea();
            // return a1 > a2;
			return this->getArea() > r.getArea();
        }
		Rect operator+(Rect &r)
        {
            Rect newRect(this->getWidth()+r.getWidth(), this->getHeight()+r.getHeight());
            return newRect;
            /*int sum = 0;
            int sum2 = 0;
            sum = this->getHeight() + this->getWidth();
            sum2 = r.getWidth() + r.getHeight();
            int sum3 = sum + sum2;
            return sum3;*/
        }

};

int main()
{
	Rect r1(20,20), r2(10, 10), r3;

	if ( r1  > r2 ) 
		cout << "R1 is greater than r2\n";

	r3 = r1 + r2;
	cout << "R3 width " << r3.getWidth() << endl;
	cout << "R3 height " << r3.getHeight() << endl;
	cout << "R3 Area " << r3.getArea() << endl;

}