#include <stdio.h>
#include <string.h>

int main() {

	char fruit[20] = "strawberry";					//char �迭 ����� ���ڿ� �ʱ�ȭ

	printf("%s\n", fruit);					//�迭������ ����� ���ڿ� ���
	strcpy(fruit, "banana");				//fruit�� �ٳ��� ����
	printf("%s\n", fruit);					//banana���

	return 0;
}