// equal.cpp -- equality vs assignment
#include <iostream>

int main()
{
	using namespace std;
	int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
	
	cout << "Doint it right:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++) {
		cout << "quiz " << i << " is a 20\n";
	} 
	/*   
	// 错误将比较 == 写为赋值 = 后 程序会死循环 
	cout << "Doint it dangerously wrong: \n";
	for (i = 0; quizscores[i] = 20; i++) {
		cout << "quiz " << i << " is a 20\n";
	}
	*/
	return 0;
}
