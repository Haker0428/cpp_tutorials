// if.cpp -- using the is statement 
#include <iostream>

int main()
{
	using namespace std;
	
	char ch;
	int spaces = 0;
	int total = 0;
	while (ch != '.') {
		if (ch == ' ') {
			spaces++;
		}
		total ++;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout < " character tpta; in sentence\n";
	return 0;
}
