#include <stdio.h>

int sum(int, int);			//�Լ� ����

int main(void)
{
	int(*fp)(int, int);		//�Լ� ������ ����
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result: %d\n", res);

	return 0;
}

int sum(int a, int b)			//�Լ� ����
{
	return (a+b);
}