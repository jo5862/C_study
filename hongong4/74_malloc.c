#include<stdio.h> 
#include<stdlib.h> 

int main(void)
{
	int* pi;
	double* pd;
	pi = (int*)malloc(sizeof(int));			//메모리 동적 할당 후 포인터 연결
	
	if (pi == NULL)
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1);
	}
	
	pd = (double*)malloc(sizeof(double));		//1.변수 크기 확인
												//2.저장공간할당, (void *)형 반환
												//3.반환 주소 doubl형으로 형 변환
												//4. double형을 가리키는 포인터에 저장
	
	*pi = 10;					
	*pd = 3.4;									//pd가 가리키는 공간에 3.4저장
	
	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);
	
	free(pi);
	free(pd);
	
	return 0;
}
