#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);		//10>20은 거짓이므로 결과 값은 0
	printf("a > b) : %d\n", res);
	res = (a >= b);		//10>=20은 거짓이므로 결과 값은 0
	printf("a >= b) : %d\n", res);
	res = (a < b);		//10<20은 참이므로 결과 값은 1
	printf("a <= b) : %d\n", res);
	res = (a <= b);		//10>20은 거짓이므로 결과 값은 0
	printf("a <= b) : %d\n", res);
	res = (a <= c);		//10>10은 참이므로 결과 값은 1
	printf("a <= c) : %d\n", res);
	res = (a == b);		//10==30은 거짓이므로 결과 값은 0
	printf("a == b) : %d\n", res);
	res = (a != b);		//10!=20은 참이므로 결과 값은 1
	printf("a != b) : %d\n", res);
	res = (a != c);		//10!=10은 거짓이므로 결과 값은 0
	printf("a != c) : %d\n", res);
}