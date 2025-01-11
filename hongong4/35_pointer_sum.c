#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, tot;

	double avg;				//평균 변수 선언

	int* pa, * pb;			//포인터 pa, pb 선언

	int* pt = &tot;			//포인터pt선언 및 tot주소로 초기화
	double* pg = &avg;		//포인터pg선언 및 avg주소로 초기화

	pa = &a;				//포인터 pa에 a 주소 대입
	pb = &b;				//포인터 pa에 b 주소 대입

	*pt = *pa + *pb;

	*pt = *pa + *pb;
	//a값과 b값을 더해 total에 저장 
	*pg = *pt / 2.0;
	//total값을 2로 나눈값을 avg에 저장


	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수 합 : %d, \n", *pt); //total값출력 
	printf("두 정수의 평균 : %.1lf, \n", *pg); //avg 값 출력

	return 0;



}