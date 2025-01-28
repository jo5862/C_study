#include <stdio.h> 
#include<stdlib.h> 
#include<string.h> 

struct profile	//신상 명세 구조체 선언 
{
	char name[20];
	//이름 저장 배열 선언 
	
	// 나이,키,자기소개 포인터 변수 선언
	int age; 
	double height;
	char* intro;	
};

int main(void)
{
	struct profile yuni; //구조체 변수 선언
	yuni.height = 164.5; // 키
	strcpy(yuni.name, "서하윤"); //name배열에  이름 복사 
	yuni.intro = (char*)malloc(80); //자 기 소 개를 저장할 동적 할당
	yuni.age = 17;
	printf("자기소개 : ");
	gets(yuni.intro);
	
	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	
	free(yuni.intro);
	
	return 0;
}
