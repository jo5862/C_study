#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");			//str1배열에 "tiger" 복사 
	strcpy(str2, str1);				//str2배열
	printf("%s, %s\n", str1, str2);

	return 0;
}