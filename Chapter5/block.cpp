// block.cpp -- use a block statement
#include <iostream>

int main()
{
	using namespace std;
	
	cout << "The Amazing Accounto will sum and average ";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++) {
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "The Amazing Acounto bids you adieu!\n";
	return 0;
}
