#include <stdio.h>

/* char형 1차원 배열을 선언과 동시에 다음 문장의 내용으로 초기화하고, 
초기화 이후에는 저장된 내용을 출력하는 예제를 작성해보자.

"Good time"

참고로 C언어는 배열 기반의 문자열 저장 및 출력에 대한 별도의 기준을 제공하고 있다.
하지만 이 문제는 지금까지 우리가 공부한 내용의 범위 내에서 해결해야 한다.*/

int main(void) {
    char string[20] = "Good time";
    printf("%s", string);
    return 0;
}