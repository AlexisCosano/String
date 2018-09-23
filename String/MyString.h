#ifndef __MYSTRING_H__
#define __MYSTRING_H__


class MyString()
{
private:
	const char* content = nullptr;


public:
	// Constructors --------------------------------------------------------------------
	MyString() {}

	MyString(const char* given_content) : content(given_content) {}

	MyString(const MyString& string_cpy) : content(string_cpy->content) {}

	// Destructor ----------------------------------------------------------------------

	~MyString() {}

	// String
	/*
	string a;
	string b("hello");
	string c(b);
	a = "bye";
	*/
	// String without templates

}
#endif
