#include <stdio.h>
/*
�� ������ ����� ���� ���� �ڹٲٴ� �Լ��� �����غ���. 
���� �� �Լ��� �̸��� Swap3�� �ϸ�, ������ ���·� �Լ��� ȣ��Ǿ�� �Ѵ�.

Swap3(&num1, &num2, &num3);

�׸��� �Լ�ȣ���� ����� num1�� ����� ���� num2��, num2�� ����� ����  num3��,
�׸��� num3�� ����� ���� num1�� ����Ǿ�� �Ѵ�.
*/

void Swap3(int* num1, int* num2, int* num3);

int main() {
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("num1 : %d, num2 : %d, num3 : %d", num1, num2, num3);
}

void Swap3(int* num1, int* num2, int* num3) {
	int temp = *num1;
	*num1 = *num3;
	*num3 = *num2;
	*num2 = temp;
}
