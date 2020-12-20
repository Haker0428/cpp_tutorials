// textin4.cpp -- reading chars with a while loop
#include <iostream>

int main()
{
	using namespace std;
	char ch;
	int count;
	
	while ((ch = cin.get()) != EOF) {
		cout.put(char(ch));
		++count;
	}
	
	cout << endl << count << " characters read\n";
	return 0;
}
