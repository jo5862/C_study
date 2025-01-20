#include <stdio.h>

void assign10(void);
void assign20(void);

int a;							//전역변수 선언, 전역 변수의 초기화는 따로 선언을 하지 않더라도 0으로 자동 설정된다. 

int main(void)
{
	printf("함수 호출 전 a 값 : %d \n", a);		//전역변수 a출력

	assign10();
	assign20();

	printf("함수 호출 후 a값 :%d\n", a);

	return 0;

}

void assign10(void)
{
	a = 10;						//전역변수 a에 10 대입
}

void assign20(void)
{
	int a;						//전역변수와 같은 이름의 지역변수 선언

	a = 20;						//대입되는 20의 값은 전역변수 a에 저장되는 것이 아니라 지역변수 a에 저장이 된다.
}