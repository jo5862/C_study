#include <stdio.h> 

void input_ary(double* pa, int size); // 배열 입력 함수 선언 

double find_max(double* pa, int size); // 최댓값을 찾는 함수 선언

int main(void)
{
	double ary[5]; //5개 배열요소가 있는 배열선언  
	double max; // 최댓값을 저장할 변수 
	
	int size = sizeof(ary) / sizeof(ary[0]); // 배열 크기 계산 20/4 =5 
	
	input_ary(ary, size); // 배열 값 입력 받기 
	
	max = find_max(ary, size); // 최댓값 찾기 
	
	printf("배열의 최댓값 : %.1lf\n", max); // 최댓값 출력 
	
	return 0;
}
// 배열 값을 입력받는 함수 
void input_ary(double* pa, int size)
{
	int i;
	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++) //size 수 만큼 반복  
	{ 
		scanf("%lf", pa + i); //&pa[i]도 가능, 입력할 배열 요소의 주소를  전달 
	}
}

// 배열에서 최댓값을 찾는 함수 
double find_max(double* pa, int size)
{
	int i;
	double max = 0.0;	//첫 번째 배열요소를 최대값으로 설정 
	for (i = 0; i < size; i++)
	{
		if (pa[i] > max)
		{
			max = pa[i];	//새로운 배열 요소 값이 max보다 크면 대입  
		} 
		
	}
		return max;
	
}
