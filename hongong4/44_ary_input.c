#include <stdio.h> 

void input_ary(double* pa, int size); // �迭 �Է� �Լ� ���� 

double find_max(double* pa, int size); // �ִ��� ã�� �Լ� ����

int main(void)
{
	double ary[5]; //5�� �迭��Ұ� �ִ� �迭����  
	double max; // �ִ��� ������ ���� 
	
	int size = sizeof(ary) / sizeof(ary[0]); // �迭 ũ�� ��� 20/4 =5 
	
	input_ary(ary, size); // �迭 �� �Է� �ޱ� 
	
	max = find_max(ary, size); // �ִ� ã�� 
	
	printf("�迭�� �ִ� : %.1lf\n", max); // �ִ� ��� 
	
	return 0;
}
// �迭 ���� �Է¹޴� �Լ� 
void input_ary(double* pa, int size)
{
	int i;
	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++) //size �� ��ŭ �ݺ�  
	{ 
		scanf("%lf", pa + i); //&pa[i]�� ����, �Է��� �迭 ����� �ּҸ�  ���� 
	}
}

// �迭���� �ִ��� ã�� �Լ� 
double find_max(double* pa, int size)
{
	int i;
	double max = 0.0;	//ù ��° �迭��Ҹ� �ִ밪���� ���� 
	for (i = 0; i < size; i++)
	{
		if (pa[i] > max)
		{
			max = pa[i];	//���ο� �迭 ��� ���� max���� ũ�� ����  
		} 
		
	}
		return max;
	
}
