#include <stdio.h>

int main(void) {
	int n;		//끝 정수 값을 입력하기 위한 변수 선언

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &n);
	
	int i, j;		// 변수 i, j 선언
	int cnt = 0;	// 5개 증가 후 줄 바꿈을 위한 변수 초기화

	for ( i = 2; i <= n; i++)
	{
		for ( j = 2; j <= i; j++)	// j는 2부터 i - 1까지
		{
			if (i % j == 0)			//나머지 몫이 0이되면 
				break;				//j에 대한 for문 탈출
		}
		if (i == j)					//예를들어 i값이 5일경우 j의 for문은 2,3,4,5까지 진행
									//j의 마지막 값 5와 i의 값 5는 동일한걸 확인 가능
		{
			printf("%4d", i);		//i값 출력
			cnt++;					//cnt 값 1증가
			if (cnt % 5 == 0)		//cnt 값이 5가되면
				printf("\n");		//줄 바꿈 출력
		}
	}
	printf("\n");  // 마지막 줄 끝내기 위한 줄바꿈
	return 0;
}