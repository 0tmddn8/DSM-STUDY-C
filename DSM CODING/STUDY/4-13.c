#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int a, b;
	printf("더 하고 싶은 두 값을 입력하세요 : ");
	scanf("%d %d", &a, &b); 
	printf("a: %d + b: %d = c: %d\n", a, b, a+b); /* a:% d + b : % d = c : % d", a, b, a+b 에서 a: %d는 a의 값을 의미 
	b: %d는 b의 값을 의미 c: %d는 a+b의 값을 의미함*/
	printf("a변수의 주소는 %p입니다.\n", &a); // 주소를 출력할때는 %p를 사용, %p에 넣을 변수 앞에는 &을 붙여준다.
	return 0;
}