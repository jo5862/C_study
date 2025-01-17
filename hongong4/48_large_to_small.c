#include <stdio.h>

int main(void)
{
	char small, cap = 'G'; //char형 변수 선언과 초기화 
	if ((cap >= 'A') && (cap <= 'Z')) //대문자 범위라면(아스키코드값으로 A이상 Z이하 
	{ 
		small = cap + ('a' - 'A'); //대/소문자차이를 이용해 소문자로 변환 
	}
printf("대문자 : %c %c", cap, '\n'); //\n을 %c로 출력하면 줄이 바뀐다. 
printf("소문자 : %c", small);
return 0;
}
