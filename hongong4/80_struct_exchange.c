#include <stdio.h> 

struct vision       //�κ��� �÷��� ������ ����ü ���� 
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); //�÷��� �ٲٴ� �Լ� ���� 

int main(void)
{
	struct vision robot;

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);
	return 0;
}

struct vision exchange(struct vision robot) //����ü�� ��ȯ�ϴ� �� �� 
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
};
