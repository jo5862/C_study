#include <stdio.h>

// 학생 정보를 담을 구조체 정의
struct profile
{
    int num;        // 학번
    char name[20];  // 이름
    int kor;        // 국어 점수
    int eng;        // 영어 점수
    int mat;        // 수학 점수
    int tot;        // 총점
    double avg;     // 평균
    char grade;     // 학점
};

typedef struct profile pro; // profile 구조체를 pro라는 이름으로 정의

// 함수 선언: 각 학생의 총점, 평균, 학점을 계산하는 함수
void cal(pro* students);

// 함수 선언: 학생들을 총점 기준 내림차순으로 정렬하는 함수
void max(pro* students, int size);

int main(void)
{
    pro students[5];  // 학생 5명의 정보를 저장할 배열
    int i, j, k;

    // 5명의 학생 정보를 입력 받기
    for (i = 0; i < 5; i++)
    {
        printf("학번 : ");
        scanf("%d", &students[i].num);  // 학번 입력
        printf("이름 : ");
        scanf("%s", &students[i].name);  // 이름 입력
        printf("국어, 영어, 수학 : ");
        scanf("%d%d%d", &students[i].kor, &students[i].eng, &students[i].mat);  // 3과목 점수 입력

        // 총점, 평균, 학점 계산
        cal(&students[i]);
    }

    // 정렬 전 데이터 출력
    printf("#정렬 전 데이터...\n");
    for (j = 0; j < 5; j++)
    {
        printf("   %d  %s %3d %3d %3d %3d %.1lf %5c\n",
            (students + j)->num, students[j].name,
            (students + j)->kor, (students + j)->eng,
            (students + j)->mat, students[j].tot,
            students[j].avg, students[j].grade);
    }

    // 총점 기준으로 내림차순 정렬
    max(students, 5);

    // 정렬 후 데이터 출력
    printf("#정렬 후 데이터...\n");
    for (k = 0; k < 5; k++)
    {
        printf("   %d  %s %3d %3d %3d %3d %.1lf %5c\n",
            (students + k)->num, students[k].name,
            (students + k)->kor, (students + k)->eng,
            (students + k)->mat, students[k].tot,
            students[k].avg, students[k].grade);
    }

    return 0;
}

// 각 학생의 총점, 평균, 학점을 계산하는 함수
void cal(pro* student)
{
    student->tot = student->kor + student->eng + student->mat;  // 3개 과목 점수 합산
    student->avg = student->tot / 3.0;  // 평균 계산 (실수로 나누기 위해 3.0으로 나누어야 함)

    // 학점 부여
    if (student->avg >= 90)
    {
        student->grade = 'A';
    }
    else if (student->avg >= 80)
    {
        student->grade = 'B';
    }
    else if (student->avg >= 70)
    {
        student->grade = 'C';
    }
    else
    {
        student->grade = 'F';
    }
}

// 버블 정렬을 사용하여 총점 기준 내림차순 정렬하는 함수
void max(pro* students, int size)
{
    int i, j;
    pro temp;  // 학생 데이터를 임시로 저장할 변수

    // 외부 반복문: 배열의 끝에서 시작하여 하나씩 정렬을 마친 뒤, 비교할 범위를 좁혀가며 정렬
    for (i = 0; i < size - 1; i++)
    {
        // 내부 반복문: 인접한 학생들 간에 총점을 비교하여 순서를 바꿈
        for (j = 0; j < size - i - 1; j++)
        {
            // 만약 학생 j의 총점이 학생 j+1의 총점보다 작다면, 두 학생의 데이터를 교환
            if (students[j].tot < students[j + 1].tot)
            {
                // 교환을 위한 임시 변수 사용
                temp = students[j];  // 학생 j의 데이터를 temp에 저장
                students[j] = students[j + 1];  // 학생 j+1의 데이터를 j 위치로 이동
                students[j + 1] = temp;  // temp에 저장된 j의 데이터를 j+1 위치로 이동
            }
        }
    }
}
