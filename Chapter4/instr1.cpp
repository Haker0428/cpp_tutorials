//instr1.cpp -- reading more than one string
#include <iostream>

using namespace std;

int main() 
{
	const int ArSize = 20;
	char name[ArSize];
	char dedssert[ArSize];
	
	cout << "Enter your name: \n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dedssert;
	cout << "I have some dedlicious " << dedssert ;
	cout << " for you," << name << ".\n";
	
	return 0;
}
