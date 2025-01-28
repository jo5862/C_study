#include <stdio.h> 
struct student
{
	int id;
	char name[20];
	double grade;
};

int main(void)
{
	struct student
		s1 = { 315,"홍길동",2.4 }, //구조체 변수 선언과 초기화 
		s2 = { 316,"이순신",3.7 }, 
		s3 = { 317,"세종대왕",4.4 };
	
	struct student max;				//최고 학점을 저장할 구조체 변수 선언 
	max = s1;
	//s1을 최고 학점 가정 
	if (s2.grade > max.grade)max = s2;
	//s2가 더 높은면 max에 대입 
	if (s3.grade > max.grade)max = s3;
	
	printf("학번 : %d\n", max.id); //학번 출력 
	printf("이름 : %s\n", max.name); //이름 출력 
	printf("학점 : %.1lf\n", max.grade); //학점 출력 
	
	return 0;
}
