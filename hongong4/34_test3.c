#include <stdio.h>

int rec_func(int n);	//�Լ�����

int main(void)
{
	printf("%d", rec_func(10));

	return 0;

}

int rec_func(int n)
{


	if (n == 1)			//����Լ������� �ݺ��� ���� ���� �����ϰ� �ִ°� �ƴ϶�
	{					//�� �� ���� �� ���� ���࿡���� ���ο� ������ �ٽ� �����Ѵ�
		return 1;		//�׷��Ƿ� ���� �ݺ� ���� ������� �����Ƿ�
	}					//���� ����� ���� ���� �������ִ� if���� Ȱ���ؾ��Ѵ�
	else
		return n + rec_func(n - 1);
}