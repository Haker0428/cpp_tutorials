//hexoct.cpp -- shows hex and octal literals
#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int ineam = 042;
	
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal) \n";
	cout << "waist = " << waist << " (0x42 in hex) \n";
	cout << "ineam = " << ineam << " (042 in octal) \n";
	return 0;	
} 
