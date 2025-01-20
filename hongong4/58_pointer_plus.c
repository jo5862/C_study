#include <stdio.h> 

void add_ten(int* pa);

int main(void)
{
	int a = 10;
	add_ten(&a); //주소연산자a매개변수 로 설정 
	printf("a : %d\n", a);
	return 0;
}

void add_ten(int* pa) //포인터pa는 주소연산자 a와 동 일하며 이를 통해 포인터pa는 10의 값을 가진다 
{
	*pa = *pa + 10; //포인터 pa값에 10을  더한다 
}
