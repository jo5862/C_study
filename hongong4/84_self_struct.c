#include <stdio.h> 
struct list
{
	int num;
	struct list* next;
};

int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 }; //����ü ����  �ʱ�ȭ 
	
	struct list* head = &a, * current;
	//��� ������ �ʱ�ȭ 
	
	a.next = &b;
	//a�����Ͱ� b�� ����Ŵ 
	b.next = &c;
	//b������ ����� c�� ����Ŵ 
	
	printf("head ->num : %d\n", head->num);
	//head�� ����Ű�� a�� num��� 

	printf("head->next->num : %d\n", head->next->num);
	//head�� b�� num��� ��� 

	printf("list all : ");
	current = head;

	while (current != NULL)
	{
		printf("%d ", current->num);
		//current�� ����Ű�� ����ü ������ num��� 
		current = current->next;
		//current�� ���� ����ü ������ ����Ű������ 
	}

	printf("\n");

	return 0;
}
