#include <stdio.h> 
#include <string.h> //strlen�Լ� ����� ���� ���  ���� 

int main(void)
{
	char str1[80], str2[80]; //���ڿ��� �Է� �迭 ���� 
	char* resp; //���ڿ��� �� �迭�� ������ ���� ���� 
	
	printf("2���� ���� �̸� �Է� : "); //������� 
	scanf("%s%s", str1, str2); //2���� ���ڿ� �Է� 
	
	if (strlen(str1) > strlen(str2)) //if�� ��� str1�� ���ڿ����̰� 2���� ���� ���� �� �� ���ٸ� 
		resp = str1;
	else
		resp = str2;
	
	printf("�̸��� �� ���� �̸��� : %s\n", resp);
	
	return 0;
}
