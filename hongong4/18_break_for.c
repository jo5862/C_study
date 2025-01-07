//break를 사용한 반복문 종료 
#include <stdio.h> 
int main(void)
{
	int i; //변수 i선언 
	int sum = 0; //변수 sum 선언 및 초기화 

	for (i = 1; i < 10; i++) //i가 1부터 10까지 10번 반복 
	{ 
		sum += i; //i값은 sum에 누적 
	if (sum > 30) break; //누적 sum 값이 30을 초과하면 반복문 종료
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);
	return 0;
}
