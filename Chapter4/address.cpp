// address.cpp -- using the & operator to find address
#include <iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;
	
	cout << "dounuts value = " << donuts;
	cout << " and donuts addres = " << &donuts << endl;
	
	cout << "cups value = " << cups;
	cout << " and cups addres = " << &cups << endl;	 
	return 0;
}
