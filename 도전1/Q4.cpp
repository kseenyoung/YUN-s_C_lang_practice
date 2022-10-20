#include <stdio.h>
#include <string.h>
/*
회문(Palindrome)은 앞으로 익으나 뒤로 읽으나 차이가 없는 단어들을 뜻한다. 
예를 들어서 level, bob과 같은 단어들은 회문에 속한다. 
이에 우리는 인자로 전달되는 영단어가  회문인지 아닌지를 판단해서 
그 결과를 출력하는 기능의 함수를 정의하고 이에 적절한 main 함수를 정의해 보고자 한다. 
단 구현의 편의를 위해서 대소문자까지 일치해야 회문으로 인정하기로 하겠다. 
(이는 어디까지나 구현의 편의를 고려한 제약사항일 뿐이다.)
*/

int main() {
	char word[20];
	printf("단어 입력 :");
	scanf_s("%s", word, 20);
	int len = strlen(word);

	for (int i = 0; i < len/2; i++) {
		if (word[i] != word[len - i - 1]) {
			printf("\"%s\"는 회문이 아닙니다.");
			return 0;
		}
	}
	printf("\"%s\"는 회문입니다.", word);
}