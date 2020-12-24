// strctptr.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>

struct polar {
	double distance;
	double angle;
};

struct rect {
	double x;
	double y;
};

using namespace std;
void  rect_to_polar(rect *pxy, polar *pda);
void show_polar(polar *pda);

int main()
{
	rect rplace;
	polar pplace;
	
	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y) {
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

void  rect_to_polar(rect *pxy, polar *pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}

void show_polar(polar *pda)
{
	const double Rad_to_deg = 57.2957951;
	
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " degrees\n";
}
