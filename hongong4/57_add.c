#include <stdio.h>
void add_ten(int a);
int main(void)
{
	int a = 10;
	add_ten(a);
	printf("a : %d\n", a);
	return 0;
}
void add_ten(int a)			//main함수 값을 들고온게 아니라 복사값이다
{
	a = a + 10;				//지역변수이기 때문에 반환 되지 않는다
}