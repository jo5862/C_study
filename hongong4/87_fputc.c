#include <stdio.h> 

int main(void)
{
	FILE* fp; // 파일 포인터 선언 
	char str[] = "banana"; // 출력할 문자열 
	int i; // 반복 제어 변수 
	fp = fopen("b.txt", "w"); // 쓰기 전용으로 개방 

	if (fp == NULL) // 파일 개방 확인 
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}
	
	i = 0; // 문자 출력을 위한 변수 선언 
	
	while (str[i] != '\0') // 널 문자가 아니라면 
	{
		fputc(str[i], fp); // 문자를 파일에 출력 
		i++; // 다음 문자로 이동 
	}
	fputc('\n', fp);
	fclose(fp); // 파일 닫음 
	return 0;
}
