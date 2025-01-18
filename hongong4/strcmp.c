#include <stdio.h> 
#include <string.h> 
int main(void)
{
	char str1[80] = "pear";
	//배열 변수 선언 및 초기화 
	char str2[80] = "peach";
	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0) //각  단어들을 앞 단어 부터 아스키코드값을 참조해 비교를한다 
		printf("%s\n", str1);	//str1 pear에서 'r'은 코드값114, str2 peach에서 'c'는 코드값 99 
	else //그러므로 114>99 이므로 if문 의 값은 1이므로 조건을 충족하여 str1을 출력한다
		printf("%s\n", str2);
	return 0;
}
