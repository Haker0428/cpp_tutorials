// chapter_2_test.cpp 
#include <iostream>

using namespace std;

/* ==============Test 1 =================  */
void test1()
{
	cout << " ==== This is test 1 ====" << endl;
	cout << "Name: Jony He" << endl;
	cout << "Address: ShenZhen" << endl;	
}

/* ==============Test 2 =================  */
void test2()
{
	cout << " ==== This is test 2 ====" << endl;
	int distance;
	cout << "Please input the distance: ";
	cin >> distance;
	cout << "Finish convert, The Answer is " << (distance * 220) << endl;
}

/* ==============Test 3 =================  */
void Print1()
{
	cout << "Three blind Mice" <<endl;
}

void Print2()
{
	cout << "See how they run" << endl;
}
void test3()
{
	cout << " ==== This is test 3 ====" << endl;
	Print1();
	Print1();
	Print2();
	Print2();
}

/* ==============Test 4 =================  */
void test4()
{
	cout << " ==== This is test 4 ====" << endl;
	cout << "Enter your age: ";
	
	int age;
	
	cin >> age; 
	cout << "Your Age include " << (age * 12) << " years." << endl;
}

/* ==============Test 5 =================  */
double ConvertTemp(double temp)
{
	return (1.8 * temp + 32.0);
}
void test5()
{
	cout << " ==== This is test 5 ====" << endl;
	cout << "Please enter a Celsius value: ";
	double temp;
	cin >> temp;
	cout << temp <<" degrees Celsius is " << ConvertTemp(temp)
	     << " degrees Fahrenheit." << endl;
}

/* ==============Test 6 =================  */
double ConvertYears(double years)
{
	return (63240 * years);
}
void test6()
{
	cout << " ==== This is test 6 ====" << endl;
	cout << "Enter the number of light years: ";
	double l_years;
	cin >> l_years;
	cout << l_years << " light years = " << ConvertYears(l_years) 
		 << " astronmical units" << endl;
	
}
/* ==============Test 7 =================  */
void test7()
{
	cout << " ==== This is test 7 ====" << endl;
	int hours;
	int minutes;
	
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	cout << "Times: " << hours <<":" << minutes << endl;
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	return 0;
}
