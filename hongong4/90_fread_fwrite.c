#include <stdio.h>

int main(void)
{
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt");
	fprintf(afp, "%d", num);

	bfp = fopen("b.txt","wb");
	fwrite(&num, sizeof(num), 1, bfp);

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");				//바이너리 모드로 입력 파일 개방
	fread(&res, sizeof(res), 1, bfp);		//파일의 데이터를 그대로  변수에 입력
	printf("%d", res);						//입력 데이터 확인

	fclose(bfp);

	return 0;


}