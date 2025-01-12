#include <stdio.h> 
void print_ary(int* pa);	//함수 선언

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };	//배열 선언 및 초기화 
	print_ary(ary);						//함수 호출
	return 0;
}
void print_ary(int* pa)					
{
	int i;
	for (i = 0; i < 5; i++)				//반복문
	{
		printf("%d ", pa[i]);
	}
	return 0;
}
