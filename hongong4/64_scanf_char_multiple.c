#include <stdio.h>
int main(void)
{
	char animal[5][20];
	int i;

	int count;
	count = sizeof(animal) / sizeof(animal[0]);		//�迭 ��ü ũ�� / �κй迭 �ϳ��� ũ��(���� �� ���)
	
	for (i = 0; i < count; i++)
	{
		scanf("%s", &animal[i]);
	}
	
	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]);
		printf(" ");
	}
	return 0;
}