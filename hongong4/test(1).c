#include <stdio.h>
#include <math.h>  // pow �Լ��� ����ϱ� ���� �߰�

int main(void)
{
    int kg = 0;
    double cm = 0;

    double BMI;

    // ����� �Է� �ޱ�
    printf("������(kg)�� Ű(cm) �Է� : ");
    scanf("%d%lf", &kg, &cm);  // Ű�� �Ǽ������� �ޱ� ���� %lf ���

    double height = cm / 100;  // Ű�� ���ͷ� ��ȯ

    // BMI ���: kg / height^2
    BMI = kg / pow(height, 2);  // ������ ���� pow �Լ� ���

    // BMI�� 20 �̻� 25 �̸��� �� ǥ��
    if (BMI >= 20.0 && BMI < 25.0)
        printf("ǥ���Դϴ�\n");
    else
        printf("ü�߰����� �ʿ��մϴ�\n");

    return 0;
}
