#include <stdio.h> 

void add_ten(int* pa);

int main(void)
{
	int a = 10;
	add_ten(&a); //�ּҿ�����a�Ű����� �� ���� 
	printf("a : %d\n", a);
	return 0;
}

void add_ten(int* pa) //������pa�� �ּҿ����� a�� �� ���ϸ� �̸� ���� ������pa�� 10�� ���� ������ 
{
	*pa = *pa + 10; //������ pa���� 10��  ���Ѵ� 
}
