#include <stdio.h> 
#include <string.h> //strcpy 함수를 사용하기 위해 추가 

int main(void)
{
	char str1[80] = "strawberry"; //char배열에 문자열 초기화 
	char str2[80] = "apple"; //char배열에 문자열초기화 
	char* ps1 = "banana"; //포인터로 문자열 상수 연결 
	char* ps2 = str2; //포인터가 배열을 가리킨다 (배열 연결)

	printf("최초 문자열 : %s\n", str1);
	
	strcpy(str1, str2); //다른 배열문자열 복사 printf("바뀐 문자열 : %s\n", str1); 
	strcpy(str1, ps1); //v다른 포인터명을 복사 printf("바뀐 문자열 : %s\n", str1); 
	strcpy(str1, ps2);
	
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, "banana"); //다른 문자열을 복사 
	printf("바뀐 문자열 : %s\n", str1); 
	return 0;
}
