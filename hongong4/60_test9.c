#include <stdio.h>

void input_data(int* pa, int* pb);	
void swap_data(void);
void print_data(int a, int b);

int a, b;

int main(void)
{
	input_data(&a, &b);				//�� ������ �Է¹޾Ƽ� ���� ���� a�� b�� ����.
	swap_data();					//���� ���� a�� b�� ���� ���� �ٲ�
	print_data(a, b);				//�ٲ� �� ���

	return 0;
}

void input_data(int* pa, int* pb)
{
	printf("�� ���� �Է� : ");
	scanf("%d%d", pa, pb);
		
}

void swap_data(void)
{
	static int temp;
	extern int a, b;

	temp = a;
	a = b;
	b = temp;

}

void print_data(int a, int b)
{
	
	printf("�� ���� ���: %d %d", a, b);
}