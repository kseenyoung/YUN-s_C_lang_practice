#include <stdio.h>
#include <string.h>
/* ���α׷� ����ڷκ��� �ϳ��� ���ܾ �Է� �޾Ƽ� 
�Է� ���� ���ܾ��� ���̸� ����Ͽ� ����ϴ� ���α׷��� �ۼ��غ���. 
���� �� "Array"��� �ܾ �ԷµǸ� 5�� ��µǾ�� �Ѵ�.*/

int main(void) {
    char word[30];
    printf("�ܾ �Է��ϼ��� : ");
    scanf_s("%s", word, 30);
    printf("�ܾ��� ���� : %d", strlen(word)); // while(word[i]!='\0')�� ���� ����
    return 0;
}