#include <iostream>
int main()
{
	const char* s = "AB CDE FG";
	for (;;) {
		if (*s == '\0'/*Null•¶Žš*/)
			break;
		else
			std::cout << (*s == ' ' ? '\n' : *s);
		++s;
	}
}
