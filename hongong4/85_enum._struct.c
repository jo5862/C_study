#include <stdio.h> 
enum season { SPRING, SUMMER, FALL, WINTER }; //열거형 선언 (if,case문에 활용)

int main(void)
{
	enum season ss;
	char* pc = NULL;
	ss = SPRING;

	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
		break;
	}


	printf("나의 레저 활동 => %s", pc);
	return 0;
}
