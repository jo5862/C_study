#include <stdio.h>

int main(void)
{
	int i, j;				
	for ( i = 0; i < 5; i++)	//�� �ٲ��� ���� for�ݺ���
	{
		for ( j = 0; j < 5; j++)	//0~4������� ��µǵ����ϴ� for�ݺ���
		{
			if (i + j == 4 || i==j )	//*����� ���� if��
			{							//i�� ���� j�� �� ���� 4 or i��� j�� ���� ������
				printf("*");			//*���
			}
			else						//�ƴ϶��
				printf(" ");			// ���� ���
		}
		printf("\n");				//�� �ٲ�
	}
	return 0;
}