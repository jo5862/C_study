#include <stdio.h>

void input_data(int* pa, int* pb) // 두 정수 입력 함수 
{ 
printf("두 정수 입력 : ");
scanf("%d%d", pa, pb);
}

double average(int a, int b) // 평균을 구하는 함수 
{ 
int tot;
double avg;
tot = a + b;
avg = tot / 2.0;
return avg;
}
