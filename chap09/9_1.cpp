#include <stdio.h>

/*�� ���� ������ ���ڷ� ���޹޾Ƽ� �� �� ���� ū ���� ��ȯ�ϴ� �Լ��� 
���� ���� ���� ��ȯ�ϴ� �Լ��� �����غ���. 
�׸��� �� �Լ����� ȣ���ϴ� ������ main �Լ��� �ۼ��غ���.*/

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