#include <stdio.h>

void fruit(int cnt);	//�Լ� ����

int main(void)
{
	fruit(1);

	return 0;

}

void fruit(int cnt)
{
	printf("apple\n");
	if (cnt == 3)		//cnt=3�̵Ǹ� ����
		return;	
	fruit(cnt + 1);		//��ȣ�� �Ҷ� cnt +1
	printf("jam");		//jam 2�� ���


}
