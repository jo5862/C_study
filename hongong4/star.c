#include <stdio.h>

int main(void)
{
	int i, j;				
	for ( i = 0; i < 5; i++)	//줄 바꿈을 위한 for반복문
	{
		for ( j = 0; j < 5; j++)	//0~4행까지만 출력되도록하는 for반복문
		{
			if (i + j == 4 || i==j )	//*출력을 위한 if문
			{							//i행 값과 j열 값 합이 4 or i행과 j열 값이 같으면
				printf("*");			//*출력
			}
			else						//아니라면
				printf(" ");			// 공란 출력
		}
		printf("\n");				//줄 바꿈
	}
	return 0;
}