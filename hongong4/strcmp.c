#include <stdio.h> 
#include <string.h> 
int main(void)
{
	char str1[80] = "pear";
	//�迭 ���� ���� �� �ʱ�ȭ 
	char str2[80] = "peach";
	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) > 0) //��  �ܾ���� �� �ܾ� ���� �ƽ�Ű�ڵ尪�� ������ �񱳸��Ѵ� 
		printf("%s\n", str1);	//str1 pear���� 'r'�� �ڵ尪114, str2 peach���� 'c'�� �ڵ尪 99 
	else //�׷��Ƿ� 114>99 �̹Ƿ� if�� �� ���� 1�̹Ƿ� ������ �����Ͽ� str1�� ����Ѵ�
		printf("%s\n", str2);
	return 0;
}
