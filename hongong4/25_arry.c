#include <stdio.h> 
int main(void)
{
	int ary[5];						//int�� ��� 5���� �迭���� //ary�� arry�� ���� 
	ary[0] = 10;					//ù ���� �迭��ҿ� 10 ���� 
	ary[1] = 20;					//�� ���� �迭��ҿ� 20 ���� 
	ary[2] = ary[0] + ary[1];		//ù ��° + �� ��° =�� ��° 
	scanf("%d", &ary[3]);			//Ű���带 �Է¹޾� �� ��° ��� ���� 
	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);
	return 0;
}
