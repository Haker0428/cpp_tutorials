// numstr.cpp -- following number input with line input
#include <iostream>

int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << " What is its street address?\n";
	char address[80];
	
	cin.getline(address, 80);
	
	//cin.getline看到换行符后，将认为是一个空行，并将一个空字符串赋给address数组
	
	 
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
		
	return 0;
} 
