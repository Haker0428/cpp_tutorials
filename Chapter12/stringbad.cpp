//stringbad.cpp -- StringBad class methods
#include <cstring>
#include "stringbad.h"

using std::cout;

//静态类成员初始化 
int StringBad::num_strings = 0;

StringBad::StringBad(const char *s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
	cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad(const StringBad & st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::StringBad()
{
	len = 4;
	str = new char[4];
	std::strcpy(str, "C++");
	num_strings++;
	cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::~StringBad()
{
	cout << "\"" << str << "\" object deleted, ";
	num_strings--;
	cout << num_strings << " left\n";
	delete []str; 
}

std::ostream & operator <<(std::ostream &os, const StringBad &st)
{
	os << st.str;
	return os;
}

StringBad & StringBad::operator =(const StringBad &st)
{
	// 避免将对象赋值给自己，否则，给对象重新赋值前，释放内存操作可能删除对象的内容 
	if (this == &st) {
		return *this;
	} else {
		delete []str;
		len = st.len;
		str = new char[len + 1];
		std::strcpy(str, st.str);
		return *this;
	}
} 
