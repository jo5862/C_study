#include <stdio.h> 
int main(void)
{
	int a = 1; //변수 선언 후 1로 초기화 
	int i; //반복 횟수 선언을 위한 변수 선언

	for (i = 0; i < 3; i++) //i는 0으로 초기화 후 3보다 작은 동안  
							//(++i) 하나씩 증가하면서 
	a = a * 2; //실행문 시행 

	printf("a : %d\n", a);
	return 0;
}
