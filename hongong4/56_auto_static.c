#include <stdio.h> 

void auto_func(void);
void static_func(void);

int main(void)
{
	int i; // 반복 횟수 계산을 위한 변수  선언 
	printf("일반 지역 변수 (auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}
	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;
}

void auto_func(void)
{
	auto int a = 0; //지역변수 선언과 초기화 a++; //a값 1증가 
	printf("%d\n", a); //출력 
}

void static_func(void)
{
	static int a; //지역 변수 선언  
	a++;
	printf("%d\n", a);
}
