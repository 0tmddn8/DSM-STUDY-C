#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int a, b;
	printf("�� �ϰ� ���� �� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b); 
	printf("a: %d + b: %d = c: %d\n", a, b, a+b); /* a:% d + b : % d = c : % d", a, b, a+b ���� a: %d�� a�� ���� �ǹ� 
	b: %d�� b�� ���� �ǹ� c: %d�� a+b�� ���� �ǹ���*/
	printf("a������ �ּҴ� %p�Դϴ�.\n", &a); // �ּҸ� ����Ҷ��� %p�� ���, %p�� ���� ���� �տ��� &�� �ٿ��ش�.
	return 0;
}