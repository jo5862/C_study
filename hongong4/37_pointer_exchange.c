#include <stdio.h>

void swap(int* pa, int* pb);		//두 변수값을 바꾸는 함수 선언


int main(void)
{
	int a = 10, b = 20;				//변수 선언

	swap(&a, &b);					//a,b의 주소를 인수로 주고 함수 호출
	printf("a: %d b:%d", a, b);
	return 0;


}

void swap(int* pa, int* pb)			//매개변수로 포인터를 선언
{
	int temp;						//임시 값을 저장하기 위한 임시 변수 선언 

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}