#include <stdio.h> 

 int main(void)
{
	int score[5];

	int i;

	int total = 0;

	int count;								//배열 요소의 개수를 저장할 변수 

	double avg; 

	count = sizeof(score) / sizeof(score[0]);	//배열요소 개수 계산

	for (i = 0; i < count; i++)
		scanf("%d", &score[i]);

	for (i = 0; i < count; i++)
	{
		total += score[1];
	}
	avg = total / (double)count;			//총합을 count로 나누어 평균 계산
	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf", avg);

	return 0;
}
