#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";
	//str ���� ���� �� ���ڿ� �ʱ�ȭ 
	char* ps = "banana";
	//�����Ϳ� ���ڿ� ���� 
	puts(str);
	//apple juice ����ϰ� �ٹٲ� 
	fputs(ps, stdout);
	//banana��� 
	puts("milk");
	//banana�� �̾� ��ũ ��� 
	return 0;
}
