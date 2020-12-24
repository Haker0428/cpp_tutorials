// arrrobj.cpp -- functions with arrat object (C++11)
#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Sname = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> da);

int main()
{
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(array<double, Seasons> *pa)
{
	for (int i = 0; i < Seasons; i++) {
		cout << "Enter " << Sname[i] << " expense: ";
		cin >> (*pa)[i]; 
	}
}

void show(array<double, Seasons> da)
{
	double total = 0;
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : " << da[i] << endl;
		total += da[i];
	}	
	cout << "Total Expenses: $" << total << endl;
}
