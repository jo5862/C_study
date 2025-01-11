#include <stdio.h>

int rec_func(int n);	//함수선언

int main(void)
{
	printf("%d", rec_func(10));

	return 0;

}

int rec_func(int n)
{


	if (n == 1)			//재귀함수에서는 반복이 이전 식을 포함하고 있는게 아니라
	{					//한 번 실행 후 다음 실행에서는 새로운 식으로 다시 시작한다
		return 1;		//그러므로 이전 반복 값은 저장되지 않으므로
	}					//개별 경우의 수에 대해 설정해주는 if문을 활용해야한다
	else
		return n + rec_func(n - 1);
}