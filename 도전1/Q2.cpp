#include <stdio.h>
/*
���α׷� ����ڷκ��� 10���� ���·� ������ �ϳ� �Է� ���� ����, 
�̸� 2������ ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��� ����.
*/

int main() {
	int num10;
	int arr[8];
	size_t count = 0;
	printf("10���� : ");
	scanf_s("%d", &num10);

	for (int i = 0; i < 8; i++) {
		if (num10 <= 0) break;
		arr[i] = num10 % 2;
		num10 /= 2;
		count++;
	}
	for (int i = count-1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
}