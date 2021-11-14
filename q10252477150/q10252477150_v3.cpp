//n0��10(����)�̎��� ni ����̎��R�s�[
//1
//0987654321
// - - - - -
//
//n0��9(�) �̎��� ni �������̎��R�s�[
//987654321
// - - - - 
//
void extract(const int input[], int output[], int n)
{
	if (n > 0) {
		const int n_bit_0 = n & 1;
		do {
			if ((n & 1) ^ n_bit_0)
				*output++ = *input++;
			else
				++input;
		} while (--n);
	}
}
#include <stdlib.h>
int main()
{
	const int input[] = { 8, 5, 7, 9, 3, 6, 4, 2, 3, 1 };
	int output[_countof(input)];
	extract(input, output, _countof(input));
}
/*
�S�D�����l�̔z�� input�i�v�f��n=10�j���^����ꂽ�Ƃ��A�����Ԗڂ̗v�f�̒l�݂̂�ʂ̔z�� output �Ɋi�[����֐����쐬����B

�i�֐��̗�j
void extract( const int input[], int output[], int n )

�i�v�f�̔ԍ���1,2,3,...,10�ԖڂƂ���B0,1,2,...,9�Ԗڂł͂Ȃ��j
*/