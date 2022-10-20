#include <stdio.h>
/*
세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자. 
예를 들어서 함수의 이름이 Swap3라 하면, 다음의 형태로 함수가 호출되어야 한다.

Swap3(&num1, &num2, &num3);

그리고 함수호출의 결과로 num1에 저장된 값은 num2에, num2에 저장된 값은  num3에,
그리고 num3에 저장된 값은 num1에 저장되어야 한다.
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
