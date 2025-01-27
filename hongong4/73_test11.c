#include <stdio.h>

void swap(char* datatype, void* number1, void* number2);	//�� ��ȯ�� ���� �Լ� ����
															//datatype�� �ڷ����� ��Ÿ���� ���ڿ�,number1,2�� ��ȯ�� �� ���� ��Ÿ���� ������
void main(void)
{
	int fo,so;
	double fh, sh;

	printf("ù ��° ����� ���̿� Ű �Է� : ");				
	scanf("%d%lf", &fo, &fh);								//ù ��° ����� ���̿� Ű �Է�
	printf("�� ��° ����� ���̿� Ű �Է� : ");
	scanf("%d%lf", &so, &sh);								//�� ��° ����� ���̿� Ű �Է�

	swap("int", &fo, &so);									//int�� ����, swap�Լ� ȣ��
	swap("double", &fh, &sh);								//double�� ����, swap�Լ� ȣ��
	
	printf("ù ��° ����� ���̿� Ű : %d, %.1lf\n", fo, fh);
	printf("�� ��° ����� ���̿� Ű : %d, %.1lf\n", so, sh);

}

void swap(char* datatype, void* number1, void* number2)
{
	if (datatype == "int")									// datatype�� int���
	{
		int temp;									
															// number1�� number2�� int������ �����ϰ� �������Ͽ� ���� ��ȯ
		temp = *(int*)number1;								// number1�� int �����ͷ� ����ȯ �� ���� temp�� ����
		*(int*)number1 = *(int*)number2;					// number2�� ���� number1�� ����
		*(int*)number2 = temp;								// temp�� ����� ���� number2�� ����

	}
	else													// datatype�� double���
	{
		double temp;

		temp = *(double*)number1;							// number1�� number2�� double������ �����ϰ� �������Ͽ� ���� ��ȯ			
		*(double*)number1 = *(double*)number2;
		*(double*)number2 = temp;

	}

}