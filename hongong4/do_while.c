#include <stdio.h> 
int main(void)
{
	int a = 1; //���� a ���� �� 1�� �ʱ�ȭ 
	do // do (a*2) ���� 
	{
		a = a * 2;
	} 
	while (a < 10); //a�� 10�̸��϶����� �ݺ� ���� 
	printf("a : %d\n", a); //10 �ʰ��ϸ� �� ���¿��� ��� 
	return 0;
}
