#include <stdio.h> 
#include<stdlib.h> 
#include<string.h> 

struct profile	//�Ż� �� ����ü ���� 
{
	char name[20];
	//�̸� ���� �迭 ���� 
	
	// ����,Ű,�ڱ�Ұ� ������ ���� ����
	int age; 
	double height;
	char* intro;	
};

int main(void)
{
	struct profile yuni; //����ü ���� ����
	yuni.height = 164.5; // Ű
	strcpy(yuni.name, "������"); //name�迭��  �̸� ���� 
	yuni.intro = (char*)malloc(80); //�� �� �� ���� ������ ���� �Ҵ�
	yuni.age = 17;
	printf("�ڱ�Ұ� : ");
	gets(yuni.intro);
	
	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	
	free(yuni.intro);
	
	return 0;
}
