#include "MyString.h"


int main()
{
	MyString a;
	
	MyString b("Hello");

	MyString c(b);

	a = "World";


	printf_s("a: %s\n\n", a);
	printf_s("b: %s\n\n", b);
	printf_s("c: %s\n\n", c);
	getchar();

	return(0);
}