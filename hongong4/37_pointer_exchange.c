#include <stdio.h>

void swap(int* pa, int* pb);		//�� �������� �ٲٴ� �Լ� ����


int main(void)
{
	int a = 10, b = 20;				//���� ����

	swap(&a, &b);					//a,b�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("a: %d b:%d", a, b);
	return 0;


}

void swap(int* pa, int* pb)			//�Ű������� �����͸� ����
{
	int temp;						//�ӽ� ���� �����ϱ� ���� �ӽ� ���� ���� 

	temp = *pa;
	*pa = *pb;
	*pb = temp;

}