#include <stdio.h>

// �л� ������ ���� ����ü ����
struct profile
{
    int num;        // �й�
    char name[20];  // �̸�
    int kor;        // ���� ����
    int eng;        // ���� ����
    int mat;        // ���� ����
    int tot;        // ����
    double avg;     // ���
    char grade;     // ����
};

typedef struct profile pro; // profile ����ü�� pro��� �̸����� ����

// �Լ� ����: �� �л��� ����, ���, ������ ����ϴ� �Լ�
void cal(pro* students);

// �Լ� ����: �л����� ���� ���� ������������ �����ϴ� �Լ�
void max(pro* students, int size);

int main(void)
{
    pro students[5];  // �л� 5���� ������ ������ �迭
    int i, j, k;

    // 5���� �л� ������ �Է� �ޱ�
    for (i = 0; i < 5; i++)
    {
        printf("�й� : ");
        scanf("%d", &students[i].num);  // �й� �Է�
        printf("�̸� : ");
        scanf("%s", &students[i].name);  // �̸� �Է�
        printf("����, ����, ���� : ");
        scanf("%d%d%d", &students[i].kor, &students[i].eng, &students[i].mat);  // 3���� ���� �Է�

        // ����, ���, ���� ���
        cal(&students[i]);
    }

    // ���� �� ������ ���
    printf("#���� �� ������...\n");
    for (j = 0; j < 5; j++)
    {
        printf("   %d  %s %3d %3d %3d %3d %.1lf %5c\n",
            (students + j)->num, students[j].name,
            (students + j)->kor, (students + j)->eng,
            (students + j)->mat, students[j].tot,
            students[j].avg, students[j].grade);
    }

    // ���� �������� �������� ����
    max(students, 5);

    // ���� �� ������ ���
    printf("#���� �� ������...\n");
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

// �� �л��� ����, ���, ������ ����ϴ� �Լ�
void cal(pro* student)
{
    student->tot = student->kor + student->eng + student->mat;  // 3�� ���� ���� �ջ�
    student->avg = student->tot / 3.0;  // ��� ��� (�Ǽ��� ������ ���� 3.0���� ������� ��)

    // ���� �ο�
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

// ���� ������ ����Ͽ� ���� ���� �������� �����ϴ� �Լ�
void max(pro* students, int size)
{
    int i, j;
    pro temp;  // �л� �����͸� �ӽ÷� ������ ����

    // �ܺ� �ݺ���: �迭�� ������ �����Ͽ� �ϳ��� ������ ��ģ ��, ���� ������ �������� ����
    for (i = 0; i < size - 1; i++)
    {
        // ���� �ݺ���: ������ �л��� ���� ������ ���Ͽ� ������ �ٲ�
        for (j = 0; j < size - i - 1; j++)
        {
            // ���� �л� j�� ������ �л� j+1�� �������� �۴ٸ�, �� �л��� �����͸� ��ȯ
            if (students[j].tot < students[j + 1].tot)
            {
                // ��ȯ�� ���� �ӽ� ���� ���
                temp = students[j];  // �л� j�� �����͸� temp�� ����
                students[j] = students[j + 1];  // �л� j+1�� �����͸� j ��ġ�� �̵�
                students[j + 1] = temp;  // temp�� ����� j�� �����͸� j+1 ��ġ�� �̵�
            }
        }
    }
}
