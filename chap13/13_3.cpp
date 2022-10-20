﻿#include <stdio.h>
/*
*길이가 5인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5로 초기화한 다음, 
이 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언한다. 
그 다음 포인터 변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 모든 배열요소에 접근하여, 
배열에 저장된 모든 정수를 더하여 그 결과를 출력하는 프로그램을 작성해보자.
​*/

int main() {
	int arr[5]{ 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum = 0;

	for (int i = 4; i >= 0; i--) {
		sum += *(ptr-i);
	}
	printf("sum : %d", sum);

	return 0;
}