#define _CRT_SECURE_NO_WARNINGS // scanf�� ����ϰ� ���� ����Ҷ��� include ����
#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b); // %d : 10������ �Է¹ްڴٴ� ��, &a : a�� �ּҸ� �˷���
	printf("%d %d", a, b);
	return 0;
}