#include <stdlib.h>
#include <stdio.h>

struct node {
	int          element;
	struct node* next   ;
};
void リストの中身確認(struct node* p)
{
	while (p) {
		printf("%d ", p->element);
		p = p->next;
	}
}
struct node* sub()
{
	const int c = getchar();
	switch (c) {
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9': 
		{
			struct node* const new = (struct node*)malloc(sizeof *new);
			if (new) {
				new->element = c - '0';
				new->next = NULL;
				return new;
			}
			else
				return NULL;
		}
	default:
		return NULL;
	}
}
struct node* sub2()
{
	struct node* first = sub();
	if (first) {
		for (;;) {
			struct node* const p = sub();
			if (p) {
				p->next = first;
				first = p;
			}
			else
				return first;
		}
	}
	else
		return NULL;
}
void メモリ解放(struct node* p)
{
	if (p) {
		for (;;) {
			struct node* const l_next = p->next;
			free(p);
			if (l_next)
				p = l_next;
			else
				break;
		}
	}
}

int main()
{
	struct node* const l1 = sub2();
	struct node* const l2 = sub2();
	リストの中身確認(l1);
	リストの中身確認(l2);
	メモリ解放(l1);
	メモリ解放(l2);
}
