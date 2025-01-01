#include <stdio.h> // 표준 입출력 라이브러리 포함

int main(void)  // 프로그램의 시작 지점
{
    int rank = 2, m = 0; // rank 변수는 순위를 저장하고, m 변수는 결과 값을 저장할 변수

    switch (rank)  // rank의 값에 따라 분기
    {
    case 1:  // rank가 1인 경우
        m = 300;  // m에 300을 저장
        break;  // case 1에서 실행이 끝나면 switch문을 종료
    case 2:  // rank가 2인 경우
        m = 200;  // m에 200을 저장
        break;  // case 2에서 실행이 끝나면 switch문을 종료
    case 3:  // rank가 3인 경우
        m = 100;  // m에 100을 저장
        break;  // case 3에서 실행이 끝나면 switch문을 종료
    default:  // rank가 1, 2, 3이 아닌 다른 값인 경우
        m = 10;  // m에 10을 저장
        break;  // default에서 실행이 끝나면 switch문을 종료
    }

    printf("m : %d\n", m);  // m 값을 출력

    return 0;  // 프로그램 정상 종료
}
