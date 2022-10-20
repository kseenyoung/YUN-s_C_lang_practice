#include <stdio.h>
#include <string.h>
/*프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다. 
그 다음 배열에 저장된 영단어를 역순으로 뒤집는다. 
물론 이 때에 널 문자의 위치를 변경해서는 안 된다. 
뒤집고 나서는 제대로 뒤집혀졌는지 확인하기 위해서 출력해보자.
​*/
int main(void) {
    char word[30];
    char change[30];
    printf("단어 입력 : ");
    scanf_s("%s", word, 30);
    int len = strlen(word);
    int j = 0;

    for (int i = len-1; i >= 0; i--) {
        change[j++] = word[i];
    }
    change[len] = '\0';

    printf("reverse word : %s", change);

    return 0;
}