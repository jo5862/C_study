#include <stdio.h> 
void print_ary(int* pa);	//�Լ� ����

int main(void)
{
	int ary[5] = { 10,20,30,40,50 };	//�迭 ���� �� �ʱ�ȭ 
	print_ary(ary);						//�Լ� ȣ��
	return 0;
}
void print_ary(int* pa)					
{
	int i;
	for (i = 0; i < 5; i++)				//�ݺ���
	{
		printf("%d ", pa[i]);
	}
	return 0;
}
