#include <stdio.h>
int main()
{
	const char* s = "AB CDE FG";
	for (;;) {
		if (*s == '\0'/*Null•¶Žš*/)
			break;
		else
			putchar(*s == ' ' ? '\n' : *s);
		++s;
	}
}
