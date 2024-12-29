#include <stdio.h>

int main(void)
{
	double apple;	//실수
	int banana;		//정수
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;		//정수와 정수의 나누기 연산
	orange = 5 % 2;		//정수와 정수의 나머지 연산

	printf("apple : %.1lf\n", apple);
	printf("apple : %d\n", banana);
	printf("apple : %d\n", orange);

	return 0;

}