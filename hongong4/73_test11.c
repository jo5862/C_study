#include <stdio.h>

void swap(char* datatype, void* number1, void* number2);	//값 교환을 위한 함수 선언
															//datatype은 자료형을 나타내는 문자열,number1,2는 교환할 두 값을 나타내는 포인터
void main(void)
{
	int fo,so;
	double fh, sh;

	printf("첫 번째 사람의 나이와 키 입력 : ");				
	scanf("%d%lf", &fo, &fh);								//첫 번째 사람의 나이와 키 입력
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d%lf", &so, &sh);								//두 번째 사람의 나이와 키 입력

	swap("int", &fo, &so);									//int형 설정, swap함수 호출
	swap("double", &fh, &sh);								//double형 설정, swap함수 호출
	
	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", fo, fh);
	printf("두 번째 사람의 나이와 키 : %d, %.1lf\n", so, sh);

}

void swap(char* datatype, void* number1, void* number2)
{
	if (datatype == "int")									// datatype이 int경우
	{
		int temp;									
															// number1과 number2를 int형으로 간주하고 역참조하여 값을 교환
		temp = *(int*)number1;								// number1을 int 포인터로 형변환 후 값을 temp에 저장
		*(int*)number1 = *(int*)number2;					// number2의 값을 number1에 저장
		*(int*)number2 = temp;								// temp에 저장된 값을 number2에 저장

	}
	else													// datatype이 double경우
	{
		double temp;

		temp = *(double*)number1;							// number1과 number2를 double형으로 간주하고 역참조하여 값을 교환			
		*(double*)number1 = *(double*)number2;
		*(double*)number2 = temp;

	}

}