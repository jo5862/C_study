#include <stdio.h> 
int main(void)
{
	int score[2][3][4] =
	{
	{{72,80,95,60},{68,98,83,90},{75,72,84,90}},
	{{66,85,90,88},{95,92,88,95},{43,72,56,75}}
	};
	//2개반의 3명에 대한 4과목의 점수 

	int i, j, k;								//반복제어변수 선언 

	for (i = 0; i < 2; i++)						//반 수만큼 반복 
	{
		printf("%d 반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)					//학생 수만큼 반복 
		{
			for (k = 0; k < 4; k++)				//과목 수 만큼 반복 
			{
				printf("%5d", score[i][j][k]);	//점수 출력 
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
