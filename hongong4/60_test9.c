#include <stdio.h>

void input_data(int* pa, int* pb);	
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b);				//두 정수를 입력받아서 전역 변수 a와 b에 저장.
	swap_data();					//전역 변수 a와 b의 값을 서로 바꿈
	print_data(a, b);				//바뀐 값 출력

	return 0;
}

void input_data(int* pa, int* pb)
{
	printf("두 정수 입력 : ");
	scanf("%d%d", pa, pb);
		
}

void swap_data(void)
{
	static int temp;
	extern int a, b;

	temp = a;
	a = b;
	b = temp;

}

void print_data(int a, int b)
{
	
	printf("두 정수 출력: %d %d", a, b);
}