#include <stdio.h>

/*����(Celsius) �µ��� �Է��ϸ� ȭ��(Fahrenheit) �µ��� ��ȯ�ϴ� CelToFah��� �̸��� �Լ��� 
�� �ݴ�� ȭ�� �µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel�̶�� �̸��� �Լ��� �����ϰ� 
�� �� �Լ��� ȣ���ϴ� ������ �ϼ��غ���. ����� ������ ȭ���� �µ���ȯ�� ������ ������ ����.
  Fah = 1.8 x Cel + 32 */

float CelToFah(int fah);
float FahToCel(int cel);

void RemoveN();

int main() {
	float fah, cel;
	printf("ȭ���� �Է��Ͻÿ� : ");
	scanf_s("%f", &fah);
	RemoveN();
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%f", &cel);

	printf("���� -> ȭ�� : %f -> %f", cel, CelToFah(cel));
	printf("ȭ�� -> ���� : %f -> %f", fah, FahToCel(fah));
}

float CelToFah(int cel) {
	return 1.8 * cel + 32;
}
float FahToCel(int fha) {
	return (fha - 32) / 1.8;
}

void RemoveN() {
	while (getchar() != '\n');
}