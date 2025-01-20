#include <stdio.h> 
#include <string.h> //strlen함수 사용을 위한 헤더  파일 

int main(void)
{
	char str1[80], str2[80]; //문자열을 입력 배열 선언 
	char* resp; //문자열이 긴 배열을 선택할 변수 선언 
	
	printf("2개의 과일 이름 입력 : "); //문자출력 
	scanf("%s%s", str1, str2); //2개의 문자열 입력 
	
	if (strlen(str1) > strlen(str2)) //if문 출력 str1의 문자열길이가 2보다 문자 개수 가 더 많다면 
		resp = str1;
	else
		resp = str2;
	
	printf("이름이 긴 과일 이름은 : %s\n", resp);
	
	return 0;
}
