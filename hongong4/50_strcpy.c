#include <stdio.h> 
#include <string.h> //strcpy �Լ��� ����ϱ� ���� �߰� 

int main(void)
{
	char str1[80] = "strawberry"; //char�迭�� ���ڿ� �ʱ�ȭ 
	char str2[80] = "apple"; //char�迭�� ���ڿ��ʱ�ȭ 
	char* ps1 = "banana"; //�����ͷ� ���ڿ� ��� ���� 
	char* ps2 = str2; //�����Ͱ� �迭�� ����Ų�� (�迭 ����)

	printf("���� ���ڿ� : %s\n", str1);
	
	strcpy(str1, str2); //�ٸ� �迭���ڿ� ���� printf("�ٲ� ���ڿ� : %s\n", str1); 
	strcpy(str1, ps1); //v�ٸ� �����͸��� ���� printf("�ٲ� ���ڿ� : %s\n", str1); 
	strcpy(str1, ps2);
	
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy(str1, "banana"); //�ٸ� ���ڿ��� ���� 
	printf("�ٲ� ���ڿ� : %s\n", str1); 
	return 0;
}
