#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, tot;

	double avg;				//��� ���� ����

	int* pa, * pb;			//������ pa, pb ����

	int* pt = &tot;			//������pt���� �� tot�ּҷ� �ʱ�ȭ
	double* pg = &avg;		//������pg���� �� avg�ּҷ� �ʱ�ȭ

	pa = &a;				//������ pa�� a �ּ� ����
	pb = &b;				//������ pa�� b �ּ� ����

	*pt = *pa + *pb;

	*pt = *pa + *pb;
	//a���� b���� ���� total�� ���� 
	*pg = *pt / 2.0;
	//total���� 2�� �������� avg�� ����


	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ���� �� : %d, \n", *pt); //total����� 
	printf("�� ������ ��� : %.1lf, \n", *pg); //avg �� ���

	return 0;



}