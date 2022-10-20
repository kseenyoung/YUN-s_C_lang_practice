#include <stdio.h>

/*섭씨(Celsius) 온도를 입력하면 화씨(Fahrenheit) 온도를 반환하는 CelToFah라는 이름의 함수와 
그 반대로 화씨 온도를 입력하면 섭씨 온도를 반환하는 FahToCel이라는 이름의 함수를 정의하고 
이 두 함수를 호출하는 예제를 완성해보자. 참고로 섭씨와 화씨간 온도변환의 공식은 다음과 같다.
  Fah = 1.8 x Cel + 32 */

float CelToFah(int fah);
float FahToCel(int cel);

void RemoveN();

int main() {
	float fah, cel;
	printf("화씨를 입력하시오 : ");
	scanf_s("%f", &fah);
	RemoveN();
	printf("섭씨를 입력하시오 : ");
	scanf_s("%f", &cel);

	printf("섭씨 -> 화씨 : %f -> %f", cel, CelToFah(cel));
	printf("화씨 -> 섭씨 : %f -> %f", fah, FahToCel(fah));
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