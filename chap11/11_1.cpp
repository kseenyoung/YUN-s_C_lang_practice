﻿#include <stdio.h>

/* 길이가 5인 int형 배열을 선언해서 프로그램 사용자로부터 총 5개의 정수를 입력 받자! 
그리고 입력이 끝나면 다음의 내용을 출력하도록 예제를 작성해보자.

- 입력된 정수 중에서 최댓값
- 입력된 정수 중에서 최솟값
- 입력된 정수의 총 합​

단, 반드시 입력을 완료한 상태에서 '최댓값'과 '최솟값' 그리고 '총 합'을 계산해야 한다. 
참고로 배열을 대상으로 scanf문을 구성할 때에는 다음과 같이 해야 한다.

- scanf("%d", &arr[2]);

// 3번째 배열요소에 정수 값 입력 받음​

변수를 대상으로 & 연산자를 붙여주듯이, 배열요소를 대상으로 할 때에도 & 연산자를 붙여야 한다. */

int Max(int *arr);
int Min(int *arr);
int Sum(int *arr);

int main(void) {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        printf("%d 번째 값 : ", i+1);
        scanf_s("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("배열 중 최대값 : %d\n", Max(arr));
    printf("배열 중 최소값 : %d\n", Min(arr));
    printf("배열의 총 합 : %d\n", Sum(arr));

    return 0;
}

int Max(int* arr) {
    int max = arr[0];
    //int len = sizeof(arr) / sizeof(int); 인자로 받은 배열의 포인터로는 크기를 구할 수 x
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
int Min(int* arr) {
    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}
int Sum(int* arr) {
    int sum = 0;
    for (int i = 1; i < 5; i++) {
        sum += arr[i];
    }
    return sum;
}