#include <iostream>

using namespace std;

int main()
{
	const double in1 = 2.54;
	const double in2 = 12;
	
	
	cout << "Please Enter Your Height:______\b\b\b\b\b\b";
	int height;
	cin >> height;
	
	double in1_height = height / in1;
	double in2_height = in1_height / in2;
	
	cout << "Height is " << height << " cm, inch is " << in1_height ;
	cout << " , and foot is " << in2_height << endl;
	return 0;
} 
