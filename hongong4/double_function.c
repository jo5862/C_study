#include <stdio.h>

int sum(int x, int y);	//sum함수 선언

int main(void)
{
	int a = 10, b = 20;
	int result;				//두 정수를 더한 결과를 저장할 변수

	result = sum(a, b);		//sum함수 호출
	printf("result : %d\n", result);

	return 0;
}							//main함수 끝

int sum(int x, int y)	//sum함수 정의
{
	int temp;			//변수 선언

	temp = x + y;		//x와 y 합을 잠시 저장할 변수

	return temp;		//temp값 반환
}						//sum함수 끝