#include <stdio.h> 
struct list
{
	int num;
	struct list* next;
};

int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 }; //구조체 변수  초기화 
	
	struct list* head = &a, * current;
	//헤드 포인터 초기화 
	
	a.next = &b;
	//a포인터가 b를 가리킴 
	b.next = &c;
	//b포인터 멤버가 c를 가리킴 
	
	printf("head ->num : %d\n", head->num);
	//head가 가리키는 a의 num사용 

	printf("head->next->num : %d\n", head->next->num);
	//head로 b의 num멤버 사용 

	printf("list all : ");
	current = head;

	while (current != NULL)
	{
		printf("%d ", current->num);
		//current가 가리키는 구조체 변수의 num출력 
		current = current->next;
		//current가 다음 구조체 변수를 가리키도록함 
	}

	printf("\n");

	return 0;
}
