#include <iostream>

class Point
{
public:
	int x;
	int y;

	double GetDistanceToCenter()
	{
		return  sqrt(x * x + y * y);
	}

	double GetDistanceBeetwenTwoPionts(Point p1, Point p2)
	{
		return  sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
	}
};

double getDistanceToCenter(int x, int y)
{
	return  sqrt(x * x + y * y);
}

/*
double getDistanceToCenter(Point p)
{
	return  sqrt(p.x * p.x + p.y * p.y);
}
*/
double getDistanceBeetwenTwoPionts(int x1, int y1, int x2, int y2)
{
	return  sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
/*
double getDistanceBeetwenTwoPionts(Point p1, Point p2)
{
	return  sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
*/


int main()
{
	int x, y;

	x = 5;
	y = 7;

	int x1, y1;

	x1 = 7;
	y1 = 87;


	double distance = getDistanceToCenter(x, y);

	double distance2 = getDistanceToCenter(x1, y1);

	double dis = getDistanceBeetwenTwoPionts(x, y, x1, y1);

	Point firstPoint;
	firstPoint.x = 5;
	firstPoint.y = 7;

	distance = getDistanceToCenter(firstPoint.x, firstPoint.y);

	distance = firstPoint.GetDistanceToCenter();

	Point secondPoint;
	secondPoint.x = 72;
	secondPoint.y = 15;

	distance = secondPoint.GetDistanceToCenter();

	//dis = getDistanceBeetwenTwoPionts(firstPoint, secondPoint);

	// C:\Users\Nauczyciel\source\repos\plik.txt
}


/*
DRY - don't repeat yourself
KISS
YAGNI
SOLID
*/