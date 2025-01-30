#include <stdio.h>

void input_data(int*, int*);	//두 점수를 입력하는 함수 선언
double average(int, int);		//평균 구하는 함수 선언

int main(void)
{
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

	return 0;
}