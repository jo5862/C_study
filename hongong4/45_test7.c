#include <stdio.h>

void input_nums(int* lotto_nums);		//배열에 로또 번호를 입력하는 함수
void print_nums(int* lotto_nums);		//배열에 저장된 값을 출력하는 함수

int main(void)
{
	int lotto_nums[6];		//로또 번호를 저장할 배열

	input_nums(lotto_nums);		//입력 함수 호출
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{

	int i;
	for ( i = 0; i < 6; i++)
	{
		printf("번호입력 : ");
		scanf("%d", &lotto_nums[i]);

	}
	printf("로또 번호 : %d", &lotto_nums[6]);

}

void print_nums(int* lotto_nums)
{

	//int i;

	//for ( i = 0; i < 6; i++)
	//{
	//	printf("%d", lotto_nums);
	//}
	
}