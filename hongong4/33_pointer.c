#include <stdio.h>

int main(void)
{
	int a;		//���� a����
	int* pa;	//������ pa����
	pa = &a;	//�����Ϳ� a�ּ� ����

	*pa = 10;	//�����ͷ� a�� ���� 10����

	printf("�����ͷ� a�� ��� :%d\n", *pa);
	printf("���� ������ a�� ��� : %d", a);

	return 0;

		
}