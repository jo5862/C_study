#include <stdio.h> 
#include <string.h> 
int main(void)
{
	char str[20] = "mango tree"; //str배열 선언 과 초기화  
	
	strncpy(str, "apple_pie", 5);
	//apple pie에서 앞 5글자만 복사해 str에 붙여넣기 
	
	printf("%s\n", str); //문자열 출력 return 0;
}
