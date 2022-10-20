#include <stdio.h>
/*
*길이가 6인 int형 배열 arr을 선언하고 이를 1, 2, 3, 4, 5, 6으로 초기화한 다음, 
배열에 저장된 값의 순서가 6, 5, 4, 3, 2, 1이 되도록 변경하는 예제를 작성해보자. 
단, 배열의 앞과 뒤를 가리키는 포인터 변수 두 개를 선언해서 
이를 활용하여 저장된 값의 순서를 뒤바꿔야 한다.​
​*/

int main() {
	int arr[6] = { 1,2,3,4,5,6 };
	int* farr = arr;
	int* tarr = &arr[5];
	int temp;

	for (int i = 0; i < 6 / 2; i++) {
		temp = *farr;
		*farr = *tarr;
		*tarr = temp;
		farr++;
		tarr--;
	}
	for (int i = 0; i < 6; i++)
		printf("arr[%d] : %d\n",i, arr[i]);

	return 0;
}