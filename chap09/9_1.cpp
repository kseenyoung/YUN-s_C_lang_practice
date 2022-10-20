#include <stdio.h>

/*세 개의 정수를 인자로 전달받아서 그 중 가장 큰 수를 반환하는 함수와 
가장 작은 수를 반환하는 함수를 정의해보자. 
그리고 이 함수들을 호출하는 적절한 main 함수도 작성해보자.*/

int MaxNum(int n1, int n2, int n3);
int MinNum(int n1, int n2, int n3);

int main() {
	int n1, n2, n3;
	scanf_s("%d %d %d", &n1, &n2, &n3);

	printf("Max num : %d\n", MaxNum(n1, n2, n3));
	printf("Min num : %d", MinNum(n1, n2, n3));
}

int MaxNum(int n1, int n2, int n3) {
	if (n1 >= n2) {
		if (n1 >= n3) return n1;
		else if(n3 >= n2 )return n3;
		return n2;
	}
	else {
		if (n2 >= n3) return n2;
		else if (n1 >= n3) return n1;
		return n3;
	}
}
int MinNum(int n1, int n2, int n3) {
	if (n1 <= n2) {
		if (n1 <= n3) return n1;
		else if (n2 <= n3) return n2;
		return n3;
	}
	else {
		if (n2 <= n3) return n2;
		else if (n1 <= n3) return n1;
		return n3;
	}
}