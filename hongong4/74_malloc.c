#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int* pi;
	double* pd;
	pi = (int*)malloc(sizeof(int));			//�޸� ���� �Ҵ� �� ������ ����
	
	if (pi == NULL)
	{
		printf("# �޸𸮰� �����մϴ�.\n");
		exit(1);
	}
	
	pd = (double*)malloc(sizeof(double));		//1.���� ũ�� Ȯ��
												//2.��������Ҵ�, (void *)�� ��ȯ
												//3.��ȯ �ּ� doubl������ �� ��ȯ
												//4. double���� ����Ű�� �����Ϳ� ����
	
	*pi = 10;					
	*pd = 3.4;									//pd�� ����Ű�� ������ 3.4����
	
	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);
	
	free(pi);
	free(pd);
	
	return 0;
}
