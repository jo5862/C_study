#include <stdio.h> 

	int main(void)
{
	int score[5];		//다섯과목의 성적을 입력할 int형 배열 선언 
	int i;				//반복제어변수 
	int tot = 0;		//총점 누적 변수 선언 및 초기화 
	double avg;			//평균 선언 
	for (i = 0; i < 5; i++) //다섯번 반복 
	{
		scanf("%d", &score[i]);		//5개의 배열에 성적 5개 입력 
	}
	for (i = 0; i < 5; i++)			//0부터 4까지 5번 반복 
	{
		tot += score[i];			//성적을 누적해 총점계산 
	}
	avg = tot / 5.0;				//평균계산 
	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);	//입력된 성적을 배열별로 누적되며 출력 } 
		printf("\n");
		printf("평균 : %.1lf", avg);
		return 0;
	}

	
}

