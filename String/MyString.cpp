#include "MyString.h"

// Constructors --------------------------------------------------------------

MyString::MyString() 
{
	content = nullptr;
}

MyString::MyString(const char* given_content)
{
	content = given_content;
}

MyString::MyString(const MyString& string_cpy)
{
	content = string_cpy.content;
}

// Destructor ----------------------------------------------------------------

MyString::~MyString() {}

// Operator ------------------------------------------------------------------

void MyString::operator=(const char* given_content)
{
	content = given_content;
}