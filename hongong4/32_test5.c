#include <stdio.h>

int main(void)
{
	char str1[80];
	int cnt = 0;
	int i;

	printf("문장 입력 : "); //입력 안내 메세지 출력 
	gets(str1); //빈칸을 포함한 문자열 입력 

	for ( i = 0; i < str1[i]!='\0'; i++)	//널문자가 나올때까지 반복
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')	//아스키코드 값 상으로 A:65 이상 Z:90미만의 문자 확인
		{
			cnt++;								//확인 되는 문자 수 만큼 카운드 증가
		}
	}


	strlwr(str1);	//str1문자열을 소문자로 변경
	
	
	printf("바뀐 문장 : %s\n", str1);
	printf("바뀐 문자의 수 : %d", cnt);
	return 0;
}