#include <stdio.h> 

int main(void)
{
	int ch; // �Է��� ���ڸ� ���� ���� ���� 

	while (1)
	{
		ch = fgetc(stdin); // Ű���忡�� ���� �Է� 
		if (ch == EOF) // �Է� ����
		{
			break;
		}

		fputc(ch, stdout); // ȭ�鿡 ���� ��� 
	}
	return 0;
}