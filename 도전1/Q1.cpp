#include <stdio.h>
/*
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받아서, 
홀수와 짝수를 구분 지어 출력하는 프로그램을 작성해 보자. 
일단 홀수부터 출력하고 나서 짝수를 출력하도록 하자. 
단, 10개의 정수는 main 함수 내에서 입력 받도록 하고, 
배열 내에 존재하는 홀수만 출력하는 함수와 배열 내에 존재하는 짝수만 출력하는 함수를 각각 정의해서 
이 두 함수를 호출하는 방식으로 프로그램을 완성하자.
​
*/

void printOdd(int* ptr);
void printEven(int* ptr);

int main() {
	int arr[10];

	for (int i = 0; i < 10; i++) {
		printf("%d번째 정수 :", i+1);
		scanf_s("%d", &arr[i]);
	}
	printOdd(arr);
	printEven(arr);
}

void printOdd(int* ptr) {
	for (int i = 0; i < 10; i++) 
		if (ptr[i] % 2 != 0) printf("%d ", ptr[i]);
	printf("\n");
}
void printEven(int* ptr) {
	for (int i = 0; i < 10; i++)
		if (ptr[i] % 2 == 0) printf("%d ", ptr[i]);
	printf("\n");
}