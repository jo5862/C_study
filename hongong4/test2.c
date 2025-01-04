#include <stdio.h>

int main(void)
{
	int a;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &a);

	int i, j,k; //변수 i,j 선언 
		for (j = 2; j < 100; j++) //j가 0부터 4까지 증가하면서 5번 반복 
		{
			if (j=j*1)
			{
				printf("%d\n", j); //별 출력문
			}
			else
			{
				break;
			}
		}
		printf("\n");
	

	return 0;
}