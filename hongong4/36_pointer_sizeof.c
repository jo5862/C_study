#include <stdio.h> 

int main(void)
{
	char ch;
	int in;
	double db;
	char* pc = &ch;
	int* ip = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));
	printf("char* ������ ũ�� : %d\n", sizeof(pc));
	printf("int* ������ ũ�� : %d\n", sizeof(ip));
	printf("double* ������ ũ�� : %d\n", sizeof(pd));
	printf("char* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*ip));
	printf("double* �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));
	return 0;
}
