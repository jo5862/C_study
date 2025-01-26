#include <stdio.h>
int main(void)
{
	char animal[5][20];
	int i;

	int count;
	count = sizeof(animal) / sizeof(animal[0]);		//배열 전체 크기 / 부분배열 하나의 크기(행의 수 계산)
	
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