#include <stdio.h> 

void swap(int x, int y); //�� ������ ���� �ٲٴ� �Լ� ����-1 

int main(void)
{
	int a = 10, b = 20; //���� a,b ���� �� �ʱ�ȭ-2 
	swap(&a, &b); //swap�Լ� ȣ��-3 
	printf("a:%d, b:%d\n", a, b); //��� 
	
	return 0;
}

void swap(int x, int y) //�μ� a,b�� ���� x,y�� �����ؼ� ���� 
{ 

	int temp; //��ȯ�� ����  ���� 
	temp = x; //temp�� a�� ���� 
	x = y;
	y = temp;
	
	return 0;
}
