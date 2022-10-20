#include <stdio.h>
#include <string.h>
/* 프로그램 사용자로부터 하나의 영단어를 입력 받아서 
입력 받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자. 
예를 들어서 "Array"라는 단어가 입력되면 5가 출력되어야 한다.*/

int main(void) {
    char word[30];
    printf("단어를 입력하세요 : ");
    scanf_s("%s", word, 30);
    printf("단어의 길이 : %d", strlen(word)); // while(word[i]!='\0')로 구현 가능
    return 0;
}