#include <stdio.h>
#include <string.h>

void swap(char char1[], char char2[]);

int main(void)
{
	char str1[80];
	char str2[80];
	char str3[80];
	
	printf("�� �ܾ� �Է� :");
	scanf("%s %s %s", str1, str2, str3);

	if (strcmp(str1, str2) > 0) //��  �ܾ���� �� �ܾ� ���� �ƽ�Ű�ڵ尪�� ������ �񱳸��Ѵ� 
		swap(str1, str2);	//str1 pear���� 'r'�� �ڵ尪114, str2 peach���� 'c'�� �ڵ尪 99 
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
* 2��°���
#include <stdio.h>
#include <string.h>

void swap(char char1[], char char2[]);

int main(void)
{
	char str1[80];
	char str2[80];
	char str3[80];

	printf("�� �ܾ� �Է� : ");
	scanf("%s %s %s", str1, str2, str3);  // �� �ܾ� �Է¹ޱ�

	// ù ��° �� (str1�� str2�� ��)
	if (strcmp(str1, str2) > 0)  // str1�� str2���� ũ�ٸ�
		swap(str1, str2);  // ��ȯ

	// �� ��° �� (str1�� str3�� ��)
	if (strcmp(str1, str3) > 0)  // str1�� str3���� ũ�ٸ�
		swap(str1, str3);  // ��ȯ

	// �� ��° �� (str2�� str3�� ��)
	if (strcmp(str2, str3) > 0)  // str2�� str3���� ũ�ٸ�
		swap(str2, str3);  // ��ȯ

	// ��� ���
	printf("%s, %s, %s\n", str1, str2, str3);

	return 0;
}

void swap(char char1[], char char2[])  // ���ڿ� �迭�� �μ��� ����
{
	char temp[80];  // �ӽ� �迭�� ����Ͽ� ���ڿ� ��ȯ
	strcpy(temp, char1);  // char1�� temp�� ����
	strcpy(char1, char2);  // char2�� char1�� ����
	strcpy(char2, temp);   // temp�� char2�� ����
}
*/