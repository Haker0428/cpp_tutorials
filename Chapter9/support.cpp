// support.cpp -- use external variable
// compile with external.cpp
#include <iostream>

extern double warming;

void update(double dt);
void local();

using std::cout;

void update(double dt)
{
	extern double warming;
	warming += dt;
	cout << "Updating global warming to " << warming << " degrees.\n";
}

void local()
{
	double warming = 0.8;
	cout << "Local Warming = " << warming << " degrees.\n";
	cout << "But global warming = " << ::warming << " degrees.\n";
}
