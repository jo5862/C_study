#include <stdio.h>
void add_ten(int a);
int main(void)
{
	int a = 10;
	add_ten(a);
	printf("a : %d\n", a);
	return 0;
}
void add_ten(int a)			//main�Լ� ���� ���°� �ƴ϶� ���簪�̴�
{
	a = a + 10;				//���������̱� ������ ��ȯ ���� �ʴ´�
}