#include <stdio.h>
#include <stdlib.h>
int main()
{
	const char* s = "AB CDE FG";
	for (  ;  ; ++s) {
		switch (*s) {
		case '\0':
			return EXIT_SUCCESS;
		case ' ': putchar('\n'); continue;
		default : putchar( *s ); continue;
		}
	}
}
