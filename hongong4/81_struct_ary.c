#include <stdio.h>

struct score
{
	int kor;
	int eng;
	int math;
};

int main(void)
{
	struct score yuni = { 90,80,70 };	//구조체 변수 선언과 초기화
	struct score* ps = &yuni;			//구조체 포인터에 주소 저장

	printf("국어 : %d\n", (*ps).kor);
	printf("국어 : %d\n", ps -> eng);
	printf("국어 : %d\n", ps->math);

	return 0;
}