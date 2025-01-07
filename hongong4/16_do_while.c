#include <stdio.h> 
int main(void)
{
	int a = 1; //변수 a 선언 및 1로 초기화 
	do // do (a*2) 실행 
	{
		a = a * 2;
	} 
	while (a < 10); //a가 10미만일때까지 반복 실행 
	printf("a : %d\n", a); //10 초과하면 그 상태에서 출력 
	return 0;
}
