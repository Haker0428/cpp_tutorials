//string.cpp -- StringBad class methods
#include "string.h"
#include <cstring>

#define BUFFSIZE  80

//静态类成员初始化 
int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String(const char *s)
{
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String(const String & st)
{
	num_strings++;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
}

String::String()
{
	len = 0;
	str = new char[1];
	str[0] = '\0';
}

String::~String()
{

	num_strings--;

	delete []str; 
}

std::ostream & operator <<(std::ostream &os, const String &st)
{
	os << st.str;
	return os;
}


std::istream & operator>>(std::istream & is, String &st)
{
	char temp[BUFFSIZE];
	is.get(temp, BUFFSIZE);
	if (is)
		st = temp;
	while (is&&is.get() != '\n')
		continue;
	return is;
}


String & String::operator =(const String &st)
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

String & String::operator =(const char *s)
{
	delete []str;
	len = strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;	
}

bool operator<(const String &st1, const String &st2)
{
	if (std::strcmp(st1.str, st2.str) < 0) {
		return true;
	} else {
		return false;
	}
}

bool operator>(const String &st1, const String &st2)
{
	return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

char &String::operator[](int i)
{
	return str[i];
}

const char & String::operator[](int i) const
{
	return str[i];
}


