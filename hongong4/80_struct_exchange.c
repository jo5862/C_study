#include <stdio.h> 

struct vision       //로봇의 시력을 저장할 구조체 선언 
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); //시력을 바꾸는 함수 선언 

int main(void)
{
	struct vision robot;

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);
	return 0;
}

struct vision exchange(struct vision robot) //구조체를 반환하는 함 수 
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
};
