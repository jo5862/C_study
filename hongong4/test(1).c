#include <stdio.h>
#include <math.h>  // pow 함수를 사용하기 위해 추가

int main(void)
{
    int kg = 0;
    double cm = 0;

    double BMI;

    // 사용자 입력 받기
    printf("몸무게(kg)와 키(cm) 입력 : ");
    scanf("%d%lf", &kg, &cm);  // 키를 실수형으로 받기 위해 %lf 사용

    double height = cm / 100;  // 키를 미터로 변환

    // BMI 계산: kg / height^2
    BMI = kg / pow(height, 2);  // 제곱을 위해 pow 함수 사용

    // BMI가 20 이상 25 미만일 때 표준
    if (BMI >= 20.0 && BMI < 25.0)
        printf("표준입니다\n");
    else
        printf("체중관리가 필요합니다\n");

    return 0;
}
