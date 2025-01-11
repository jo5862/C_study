#include <stdio.h>

int main(void)
{
	int a;		//변수 a설정
	int* pa;	//포인터 pa설정
	pa = &a;	//포인터에 a주소 대입

	*pa = 10;	//포인터로 a에 변수 10대입

	printf("포인터로 a값 출력 :%d\n", *pa);
	printf("변수 명으로 a값 출력 : %d", a);

	return 0;

		
}