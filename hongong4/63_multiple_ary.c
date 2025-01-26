#include <stdio.h>

int main(void)
{
	int score[3][4];					//3명의 학생 ,4개 과목에 대한 배열 선언
	int i,j;							//반복 선언을 위한 변수 선언
	int total;
	double avg;

	for ( i = 0; i < 3; i++)			//학생 수 만큼 반복
	{
		printf("4과목 점수 입력:");
		for ( j = 0; j < 4; j++)		//과목수만큼 반복
		{
			scanf("%d", &score[i][j]);	//점수 입력
		}
	}

	for ( i = 0; i < 3; i++)
	{
		total = 0;
		for ( j = 0; j < 4; j++)
		{
			total += score[i][j];				//한 학생당 모든 과목의 총합 기록
		}
		avg = total / 4.0;						//평균 계산
		printf("총점: %d, 평균 : %.2lf\n", total, avg);
	}
	return 0;
}