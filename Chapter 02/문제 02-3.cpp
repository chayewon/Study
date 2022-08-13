#include <iostream>
using namespace std;

typedef struct __Point
{
	int xPos;
	int yPos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pPtr = new Point;

	pPtr->xPos = p1.xPos + p2.xPos;
	pPtr->yPos = p1.yPos + p2.yPos;

	return *pPtr;
}

int main()
{
	Point* pptr1 = new Point;
	pptr1->xPos = 5;
	pptr1->yPos = 10;

	Point* pptr2 = new Point;
	pptr2->xPos = 15;
	pptr2->yPos = 20;

	Point& pRef = PntAdder(*pptr1, *pptr2);

	cout << "[" << pRef.xPos << ", " << pRef.yPos << "]" << endl;

	return 0;
}