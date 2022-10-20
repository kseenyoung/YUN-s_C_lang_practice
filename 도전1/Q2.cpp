#include <stdio.h>
/*
프로그램 사용자로부터 10진수 형태로 정수를 하나 입력 받은 다음, 
이를 2진수로 변환해서 출력하는 프로그램을 작성해 보자.
*/

int main() {
	int num10;
	int arr[8];
	size_t count = 0;
	printf("10진수 : ");
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