#include <stdio.h>
int main()
{
	for (;;) {
		const int ���� = getchar();
		if (���� == EOF)
			break;
		else if ('A' <= ���� && ���� <= 'Z')
			putchar(���� + ('a' - 'A'));
		else if ('a' <= ���� && ���� <= 'z')
			putchar(���� - ('a' - 'A'));
		else if ('0' <= ���� && ���� <= '9')
			putchar('#');
		else
			putchar(����);
	}
}
/*
C����Ɋւ��鎿��B
���͂����������
�E�啶���͏�������
�E�������͑啶����
�E�����́u#�v��
�E����ȊO�͂��̂܂�
�ŕ\������v���O���~���O
toupper��tolower���g�p�������̂Ƃ��Ă��Ȃ����̂������ė~�����ł��B
*/
