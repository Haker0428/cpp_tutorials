#include <iostream>

using namespace std;

int main()
{
	const double FOOT2INCHES = 12;
	const double INCHES2CM = 2.54;
	const double CM2M   =  100;
	const double POUNDS2KG  = 2.2; 
	
	
	double foot;
	double inch;
	double weight;
	cout << "Enter Your Height (Foot)";
	cin >> foot;
	cout << "Enter Your Height (Inch)";
	cin >> inch; 
	cout << "Enter Your Weight (Pounds)";
	cin >> weight;
	
 	double height = (foot * FOOT2INCHES + inch) * INCHES2CM / CM2M;
 	weight = weight / POUNDS2KG;
 	
 	cout << "Height is " << height << ", Weight is " << weight << " BMI is "
 		<< (weight / height);
	return 0;
}
