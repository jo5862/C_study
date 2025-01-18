#include <stdio.h>
#include <string.h>

void swap(char char1[], char char2[]);

int main(void)
{
	char str1[80];
	char str2[80];
	char str3[80];
	
	printf("세 단어 입력 :");
	scanf("%s %s %s", str1, str2, str3);

	if (strcmp(str1, str2) > 0) //각  단어들을 앞 단어 부터 아스키코드값을 참조해 비교를한다 
		swap(str1, str2);	//str1 pear에서 'r'은 코드값114, str2 peach에서 'c'는 코드값 99 
	if (strcmp(str2,str3)>0)
	{
		swap(str2, str3);
	}
	if (strcmp(str3,str1)>0)
	{
		swap(str3, str1);
	}
	printf("%s, %s, %s", str1, str2, str3);

}

void swap(char char1[], char char2[])
{
	char temp[80];
	strcpy(temp , char1);
	strcpy(char1, char2);
	strcpy(char2,temp);
}


/*
* 2번째방법
#include <stdio.h>
#include <string.h>

void swap(char char1[], char char2[]);

int main(void)
{
	char str1[80];
	char str2[80];
	char str3[80];

	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);  // 세 단어 입력받기

	// 첫 번째 비교 (str1과 str2를 비교)
	if (strcmp(str1, str2) > 0)  // str1이 str2보다 크다면
		swap(str1, str2);  // 교환

	// 두 번째 비교 (str1과 str3을 비교)
	if (strcmp(str1, str3) > 0)  // str1이 str3보다 크다면
		swap(str1, str3);  // 교환

	// 세 번째 비교 (str2와 str3을 비교)
	if (strcmp(str2, str3) > 0)  // str2가 str3보다 크다면
		swap(str2, str3);  // 교환

	// 결과 출력
	printf("%s, %s, %s\n", str1, str2, str3);

	return 0;
}

void swap(char char1[], char char2[])  // 문자열 배열을 인수로 받음
{
	char temp[80];  // 임시 배열을 사용하여 문자열 교환
	strcpy(temp, char1);  // char1을 temp에 복사
	strcpy(char1, char2);  // char2를 char1에 복사
	strcpy(char2, temp);   // temp를 char2에 복사
}
*/