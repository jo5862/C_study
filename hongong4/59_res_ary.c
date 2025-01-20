#include<stdio.h> 
int* sum(int a, int b); //int형 변수의 주소를 반환하는 함수 선언 

int main(void)
{
	int* resp; //반환값을 저장할 포인 터 resp 
	resp = sum(10, 20); //반환된 주소는 resp에 저장 
	printf(" 두 정수의 합 : %d\n", *resp); //resp가 가리키는 변수값 출력 
	return 0; 
}
int* sum(int a, int b)
{
	static int res; //정적지역변수 선언 
	res = a + b; // 두 정수 합을 res에  저장 
	return &res; //두 정수의 합이 저장 된 res의 주소연산자를 반환 
}
