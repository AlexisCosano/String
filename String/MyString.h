#ifndef __MYSTRING_H__
#define __MYSTRING_H__

#include <stdio.h>

class MyString
{
	const char* content = nullptr;

public:
	// Constructors --------------------------------------------------------------------
	MyString();

	MyString(const char* given_content);

	MyString(const MyString& string_cpy);

	// Destructor ----------------------------------------------------------------------

	~MyString();

	// Operator ------------------------------------------------------------------------

	void operator=(const char* given_string);
};

#endif
