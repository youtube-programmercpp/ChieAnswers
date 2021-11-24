#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
	printf("%c\n", *("Meiji" + 1) + 1);
	printf("%c\n", 'e'            + 1);
	//putchar(*   ("Meiji"+ 1)   );
	//putchar('\n');
}
