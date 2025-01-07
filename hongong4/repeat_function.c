#include <stdio.h>

void fruit(int cnt);	//함수 선언

int main(void)
{
	fruit(1);

	return 0;

}

void fruit(int cnt)
{
	printf("apple\n");
	if (cnt == 3)		//cnt=3이되면 종료
		return;	
	fruit(cnt + 1);		//재호출 할때 cnt +1
	printf("jam");		//jam 2번 출력


}
