#include <stdio.h>

int main(void)
{
	int ary[3];		//배열 선언
	int* pa = ary;	//포인터 선언 및 포인터에 배열명 저장
	int i;			//반복 제어 변수

	*pa = 10;
	*(pa + 1) = 20;	//두번째 배열요소에 20대입
					//대괄호를 써서 pa를 배열명처럼 사용		
		
	pa[2] = pa[0] + pa[1];	

	for ( i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
}