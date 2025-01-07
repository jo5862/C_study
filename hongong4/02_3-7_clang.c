#include <stdio.h>
#include <string.h>

int main() {

	char fruit[20] = "strawberry";					//char 배열 선언과 문자열 초기화

	printf("%s\n", fruit);					//배열명으로 저장된 문자열 출력
	strcpy(fruit, "banana");				//fruit에 바나나 복사
	printf("%s\n", fruit);					//banana출력

	return 0;
}