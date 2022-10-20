#include <stdio.h>
/*
���� num�� ����� ���� ������ ����ϴ� �Լ��� �����ϰ�, �̸� ȣ���ϴ� main �Լ��� �ۼ��غ���. 
��, ���⼭�� ���� �� ���� ���·� �Լ��� �����ؾ� �Ѵ�.

- Call-by-value ����� SquareByValue �Լ�
- Call-by-reference ����� SquareByReference �Լ�

SquareByValue �Լ��� ���ڷ� ���޵� ���� ������ ��ȯ�ؾ� �ϸ�, SquareByReference �Լ��� 
������ ����Ǿ� �ִ� ������ �ּ� ���� ���ڷ� �޾Ƽ� �ش� ������ ����� ���� ������ 
�� ������ �ٽ� �����ؾ� �Ѵ�.
*/

int SquareByValue(int n);
void SquareByReference(int *ptr);

int main() {
	int num = 10;

	printf("call-by-value : %d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("call-by-reference : %d", num);
}

int SquareByValue(int n) {
	return n ^ 2;
}

void SquareByReference(int* ptr) {
	*ptr ^= 2;
}