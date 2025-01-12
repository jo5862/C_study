#include <stdio.h> 
void print_ary(int* pa, int size);
int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
	
	print_ary(ary1, 5);
	//ary1배열 출력, 배열요소 개수 전달 
	
	printf("\n");
	
	print_ary(ary2, 7);
	//ary2배열 출력, 배열 요소 개수 전달, 함수 호출 
	
	return 0;
}
void print_ary(int* pa, int size)
//배열명과 배열요소 개수를 매개변수로 선언 
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}
