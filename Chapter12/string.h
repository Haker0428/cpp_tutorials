// string.h -- flawed string class definition
#include <iostream>

#ifndef _STRING_H_
#define _STRING_H_

class String {
	private:
		char *str;
		int len;
		static int num_strings;
		static const int CINLIM = 80;
	public:
		String(const char *s);
		String(const String &st);
		String();
		~String();
		int length() const {return len;}
		
		String & operator =(const String &st);
		String & operator =(const char *);
		char &operator[](int i);
		const char & operator[](int i) const;
		
		friend bool operator<(const String &st1, const String &st2);
		friend bool operator>(const String &st1, const String &st2);
		friend bool operator==(const String &st1, const String &st2);
		friend std::ostream & operator <<(std::ostream &os, const String &st);
		friend std::istream & operator>>(std::istream &is,  String &st);		

		static int HowMany();
};

#endif
