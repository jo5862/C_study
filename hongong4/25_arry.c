#include <stdio.h> 
int main(void)
{
	int ary[5];						//int형 요소 5개의 배열선언 //ary는 arry의 축약어 
	ary[0] = 10;					//첫 번재 배열요소에 10 대입 
	ary[1] = 20;					//두 번재 배열요소에 20 대입 
	ary[2] = ary[0] + ary[1];		//첫 번째 + 두 번째 =세 번째 
	scanf("%d", &ary[3]);			//키보드를 입력받아 네 번째 요소 저장 
	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);
	return 0;
}
