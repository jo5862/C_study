#include <stdio.h> 
#include <string.h> 
int main(void)
{
	char str[20] = "mango tree"; //str�迭 ���� �� �ʱ�ȭ  
	
	strncpy(str, "apple_pie", 5);
	//apple pie���� �� 5���ڸ� ������ str�� �ٿ��ֱ� 
	
	printf("%s\n", str); //���ڿ� ��� return 0;
}
