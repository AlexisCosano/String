#include "MyString.h"


int main()
{
	// String
	/*
	string a;
	string b("hello");
	string c(b);
	a = "bye";
	*/
	// String without templates
	MyString testring("Testing testing\n\n");
	printf_s("%s", testring);

	MyString testring2(testring);
	printf_s("%s", testring2);

	getchar();

	return(0);
}