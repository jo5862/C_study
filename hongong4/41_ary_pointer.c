#include <stdio.h>

int main(void)
{
	int ary[3];		//�迭 ����
	int* pa = ary;	//������ ���� �� �����Ϳ� �迭�� ����
	int i;			//�ݺ� ���� ����

	*pa = 10;
	*(pa + 1) = 20;	//�ι�° �迭��ҿ� 20����
					//���ȣ�� �Ἥ pa�� �迭��ó�� ���		
		
	pa[2] = pa[0] + pa[1];	

	for ( i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
}