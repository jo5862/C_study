#include <stdio.h> 
int main(void)
{
	int i, j; //���� i,j ���� 
	for (i = 0; i < 3; i++) //i�� 0���� 2���� �����ϸ鼭 ���� �ݺ� 
	{ 
		for (j = 0; j < 5; j++) //j�� 0���� 4���� �����ϸ鼭 5�� �ݺ� 
		{ 
			printf("*"); //�� ��¹� 
		}
		printf("\n");
	}
	return 0;
}
