// file2.cpp -- contains functions called in file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h"

using namespace std;

polar rect_to_polar(rect xypos)
{
	polar answer;
	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.2957951;
	
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}
