#include <stdio.h>

int main(void)
{
	char str1[80];
	int cnt = 0;
	int i;

	printf("���� �Է� : "); //�Է� �ȳ� �޼��� ��� 
	gets(str1); //��ĭ�� ������ ���ڿ� �Է� 

	for ( i = 0; i < str1[i]!='\0'; i++)	//�ι��ڰ� ���ö����� �ݺ�
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')	//�ƽ�Ű�ڵ� �� ������ A:65 �̻� Z:90�̸��� ���� Ȯ��
		{
			cnt++;								//Ȯ�� �Ǵ� ���� �� ��ŭ ī��� ����
		}
	}


	strlwr(str1);	//str1���ڿ��� �ҹ��ڷ� ����
	
	
	printf("�ٲ� ���� : %s\n", str1);
	printf("�ٲ� ������ �� : %d", cnt);
	return 0;
}