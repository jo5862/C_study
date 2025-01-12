#include <stdio.h> 

void swap(int x, int y); //두 변수의 값을 바꾸는 함수 선언-1 

int main(void)
{
	int a = 10, b = 20; //변수 a,b 선언 과 초기화-2 
	swap(&a, &b); //swap함수 호출-3 
	printf("a:%d, b:%d\n", a, b); //출력 
	
	return 0;
}

void swap(int x, int y) //인수 a,b의 값을 x,y에 복사해서 저장 
{ 

	int temp; //교환을 변수  선언 
	temp = x; //temp에 a값 저장 
	x = y;
	y = temp;
	
	return 0;
}
