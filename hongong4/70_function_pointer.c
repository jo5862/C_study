#include <stdio.h>

int sum(int, int);			//함수 선언

int main(void)
{
	int(*fp)(int, int);		//함수 포인터 선언
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result: %d\n", res);

	return 0;
}

int sum(int a, int b)			//함수 정의
{
	return (a+b);
}