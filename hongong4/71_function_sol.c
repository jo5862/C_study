#include <stdio.h>

void func(int (*fp)(int, int)); 

int sum(int a, int b); 
int mul(int a, int b); 
int max(int a, int b); 

int main(void)
{
	int sel; //선택된 메뉴 번호를 저장할 변 수 
	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값을 계산\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);
	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;
	}
	return 0;
} 

void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요");
	scanf("%d%d", &a, &b);				//두 정수 이력 
	res = fp(a, b);						//필수 포인터 로 가리키는 함수를 호출 
	printf("결과값은 : %d\n", res);		//반환값 출력 
}

int sum(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return(a * b);
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
