#include <stdio.h>

void input_nums(int* lotto_nums);		//�迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int* lotto_nums);		//�迭�� ����� ���� ����ϴ� �Լ�

int main(void)
{
	int lotto_nums[6];		//�ζ� ��ȣ�� ������ �迭

	input_nums(lotto_nums);		//�Է� �Լ� ȣ��
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{

	int i;
	for ( i = 0; i < 6; i++)
	{
		printf("��ȣ�Է� : ");
		scanf("%d", &lotto_nums[i]);

	}
	printf("�ζ� ��ȣ : %d", &lotto_nums[6]);

}

void print_nums(int* lotto_nums)
{

	//int i;

	//for ( i = 0; i < 6; i++)
	//{
	//	printf("%d", lotto_nums);
	//}
	
}