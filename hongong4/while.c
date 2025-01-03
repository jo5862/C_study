#include <stdio.h> 

int main(void)
{
	int a = 1; // a 변수 선언 후 1로 초기화 
	while (a < 10) //a가 10미만일 경우 아래 연산 계속 반복 { 
	a = a * 2;
	
	printf("a: %d\n", a); //가 10을 넘게되면 a 값 출력 
	return 0;
}
