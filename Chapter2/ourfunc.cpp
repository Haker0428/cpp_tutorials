//ourfunc.cpp -- defining your own function
#include <iostream>

void Simon(int); // function prototype for simon()

int main()
{
	using namespace std;
	
	Simon(3);
	cout << "Pick an intger: ";
	
	int count;
	cin >> count;
	Simon(count); //call it again
	cout << "Done!" << endl;
	return 0;
}

void Simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." <<endl;
}
