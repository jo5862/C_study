#include <stdio.h> 

	int main(void)
{
	int score[5];		//�ټ������� ������ �Է��� int�� �迭 ���� 
	int i;				//�ݺ������ 
	int tot = 0;		//���� ���� ���� ���� �� �ʱ�ȭ 
	double avg;			//��� ���� 
	for (i = 0; i < 5; i++) //�ټ��� �ݺ� 
	{
		scanf("%d", &score[i]);		//5���� �迭�� ���� 5�� �Է� 
	}
	for (i = 0; i < 5; i++)			//0���� 4���� 5�� �ݺ� 
	{
		tot += score[i];			//������ ������ ������� 
	}
	avg = tot / 5.0;				//��հ�� 
	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);	//�Էµ� ������ �迭���� �����Ǹ� ��� } 
		printf("\n");
		printf("��� : %.1lf", avg);
		return 0;
	}

	
}

