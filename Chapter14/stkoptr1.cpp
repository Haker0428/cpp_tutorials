// stkoptr1.cpp -- testing stack of pointers
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stacktp1.h"

const int Num = 10;

int main()
{
	using namespace std;
	
	srand(time(0));
	cout << "Please enter stack size: ";
	int stacksize;
	cin >> stacksize;
	
	Stack<const char*> st(stacksize);
	
	const char *in[Num] = {
		" 1: Hank Gilgamesh", " 2: Kiki Ishtar",
		" 3: Betty Rocker",   " 4: Ian Flagranti",
		" 5: Wolfgang Kibble", " 6: Portia Koop",
		" 7: Joy Almondo",   " 8: Xacerie Paprika",
		" 9: Juan Moore",  " 10: Misha Mache"
	};
	
	const char *out[Num];
	
	int processed = 0;
	int nextin = 0;
	while (processed < Num) {
		if (st.isempty()) {
			st.push(in[nextin++]);
		} else if (st.isfull()) {
			st.pop(out[processed++]);
		} else if (rand() % 2 && nextin < Num) {
			st.push(in[nextin++]);
		} else {
			st.pop(out[processed++]);
		}
	}
	for (int i = 0; i < Num; i++) {
		cout << out[i] << endl;
	}
	cout << "Bye\n";
	return 0;
}

