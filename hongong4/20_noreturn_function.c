#include <stdio.h>

void print_char(char ch, int count);	//함수 선언

int main(void)
{
	print_char('@',5);				//문자와 숫자를 주고 함수 호출

	return 0;
}

void print_char(char ch, int count)	//매개변수는 있으나 반환형은 없다
{
	int i;

	for ( i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	return 0;
}
