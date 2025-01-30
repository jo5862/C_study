#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("허용 범위를 벗어났습니다!\n")

int main(void)
{
	double radius, area;	//반지름과 면적 변수

	printf("반지름을 입력하세요(10이하) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;	//면적계산
	if (area > LIMIT) ERR_PRN;		//면적이 100초과하면 오류 메세지 출력
	else printf("원의 면적 : %.2lf (%s)\n", area, MSG);

	return 0;

}