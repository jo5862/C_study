#include<stdio.h> 
int* sum(int a, int b); //int�� ������ �ּҸ� ��ȯ�ϴ� �Լ� ���� 

int main(void)
{
	int* resp; //��ȯ���� ������ ���� �� resp 
	resp = sum(10, 20); //��ȯ�� �ּҴ� resp�� ���� 
	printf(" �� ������ �� : %d\n", *resp); //resp�� ����Ű�� ������ ��� 
	return 0; 
}
int* sum(int a, int b)
{
	static int res; //������������ ���� 
	res = a + b; // �� ���� ���� res��  ���� 
	return &res; //�� ������ ���� ���� �� res�� �ּҿ����ڸ� ��ȯ 
}
