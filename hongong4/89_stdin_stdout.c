#include <stdio.h> 

int main(void)
{
	int ch; // 입력한 문자를 저장 변수 선언 

	while (1)
	{
		ch = fgetc(stdin); // 키보드에서 문자 입력 
		if (ch == EOF) // 입력 종료
		{
			break;
		}

		fputc(ch, stdout); // 화면에 문자 출력 
	}
	return 0;
}