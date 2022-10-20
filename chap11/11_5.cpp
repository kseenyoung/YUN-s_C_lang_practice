#include <stdio.h>
/*프로그램 사용자로부터 영단어를 입력 받는다. 
그리고 나서 입력 받은 영단어를 구성하는 문자 중에서 아스키 코드의 값이 가장 큰 
문자를 찾아서 출력하는 프로그램을 작성해보자. 
예를 들어서 입력된 영단어가 "LOVE"라면 이 중에서 아스키 코드 값이 가장 큰 문자는 
V이므로 V가 출력되어야 한다.

​*/
int main(void) {
    char word[30];
    printf("단어 입력 :");
    scanf_s("%s", word, 30);
    int maxAscci = word[0];

    for (int i = 0; i < 30; i++) {
        if (word[i] == '\0') break;
        else if (word[i] > maxAscci) maxAscci = word[i];
    }
    printf("char : %c, int : %d", maxAscci, maxAscci);
    return 0;
}