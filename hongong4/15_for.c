#include <stdio.h> 
int main(void)
{
	int a = 1; //���� ���� �� 1�� �ʱ�ȭ 
	int i; //�ݺ� Ƚ�� ������ ���� ���� ����

	for (i = 0; i < 3; i++) //i�� 0���� �ʱ�ȭ �� 3���� ���� ����  
							//(++i) �ϳ��� �����ϸ鼭 
	a = a * 2; //���๮ ���� 

	printf("a : %d\n", a);
	return 0;
}