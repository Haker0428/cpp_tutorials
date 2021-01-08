// stringbad.h -- flawed string class definition
#include <iostream>

#ifndef _STRINGBAD_H_
#define _STRINGBAD_H_

class StringBad {
	private:
		char *str;
		int len;
		static int num_strings;
	public:
		StringBad(const char *s);
		StringBad(const StringBad &st);
		StringBad();
		~StringBad();
		StringBad & operator =(const StringBad &st);
		friend std::ostream & operator <<(std::ostream &os, const StringBad &st);
};

#endif
