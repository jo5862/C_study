#include <stdio.h> 
#include "96_point.h" // Point ����ü ���� 

#include "96_line.h" // Line ����ü ���� 
int main(void)
{
	Line a = { {1, 2}, {5, 6} }; //����ü ���� �ʱ�ȭ
	point b;
	// ��� ���� ��ǥ ���� 
	b.x = (a.first.x + a.second.x) / 2; // ��� ����  x��ǥ ��� 
	b.y = (a.first.y + a.second.y) / 2; // ��� ����  y��ǥ ��� 
	
	printf("���� ��� ���� ��ǥ : (%d, %d)\n", b.x, b.y);
	
	return 0;
}
