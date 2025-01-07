#include <stdio.h>

int main(void)
{
	int kor = 70, eng = 80, mat = 90;		//세 과목의 변수 선언과 초기화
	int tot;								//총점을 저장할 함수 선언
	
	tot = kor + eng + mat;

	printf("국어 : %d 영어 : %d 수학: %d\n", kor, eng, mat);
	printf("총점 : %d", tot);
}