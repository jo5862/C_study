#include <stdio.h> 

 int main(void)
{
	int score[5];

	int i;

	int total = 0;

	int count;								//�迭 ����� ������ ������ ���� 

	double avg; 

	count = sizeof(score) / sizeof(score[0]);	//�迭��� ���� ���

	for (i = 0; i < count; i++)
		scanf("%d", &score[i]);

	for (i = 0; i < count; i++)
	{
		total += score[1];
	}
	avg = total / (double)count;			//������ count�� ������ ��� ���
	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("��� : %.1lf", avg);

	return 0;
}
