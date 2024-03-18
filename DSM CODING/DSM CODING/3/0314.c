#define _CRT_SECURE_NO_WARNINGS // scanf를 사용하게 해줌 사용할때는 include 위에
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b); // %d : 10진수로 입력받겠다는 뜻, &a : a의 주소를 알려줌
	printf("%d %d", a, b);
	return 0;
}