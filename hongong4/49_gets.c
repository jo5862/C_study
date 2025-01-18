#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";
	//str 변수 선언 및 문자열 초기화 
	char* ps = "banana";
	//포인터에 문자열 연결 
	puts(str);
	//apple juice 출력하고 줄바꿈 
	fputs(ps, stdout);
	//banana출력 
	puts("milk");
	//banana에 이어 밀크 출력 
	return 0;
}
