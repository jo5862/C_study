//break�� ����� �ݺ��� ���� 
#include <stdio.h> 
int main(void)
{
	int i; //���� i���� 
	int sum = 0; //���� sum ���� �� �ʱ�ȭ 

	for (i = 1; i < 10; i++) //i�� 1���� 10���� 10�� �ݺ� 
	{ 
		sum += i; //i���� sum�� ���� 
	if (sum > 30) break; //���� sum ���� 30�� �ʰ��ϸ� �ݺ��� ����
	}
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);
	return 0;
}
