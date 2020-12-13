//convert.cpp -- converts stone to pounds
#include <iostream>

int Stonetolb(int);

int main()
{
	using namespace std;
	int stone;
	
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = Stonetolb(stone);
	cout << pounds << " pounds." << endl;
	
	return 0;
}

int Stonetolb(int sts)
{
	return 14 * sts;
}
