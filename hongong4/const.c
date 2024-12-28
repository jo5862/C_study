#include <stdio.h>

int main(void)
{
	int income = 0;		//소득액 초기화
	double tax;			//세금
	const double tax_rate = 0.12;	//세율 초기화

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n",tax);

	return 0;
}