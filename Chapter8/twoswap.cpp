// twoswap.cpp -- using overloaded template functions
#include <iostream>

template <typename T>
void Swap(T &a, T &b);

struct job {
	char name[40];
	double salary;
	int floor;
};

template <> void Swap(job &j1, job &j2);
void Show(job &j);

int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	
	cout << "Using compiler-generate int swapper:\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";
	
	job sue = {"Susan Yaffee", 73000.60, 7};
	job sidney = {"Sidney Taffee", 78060.72, 9};
	
	cout << "Before job swapping:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "After job swapping:\n";
	Show(sue);
	Show(sidney);
	
	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

// Ä£°åÌØ»¯  
template <> void Swap(job &a, job &b)
{
	double t1;
	int t2;
	t1 = a.salary;
	a.salary = b.salary;
	b.salary = t1;
	
	t2 = a.floor;
	a.floor = b.floor;
	b.floor = t2;
}

void Show(job &j)
{
	using namespace std;
	cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}
