#include <stdio.h> // ǥ�� ����� ���̺귯�� ����

int main(void)  // ���α׷��� ���� ����
{
    int rank = 2, m = 0; // rank ������ ������ �����ϰ�, m ������ ��� ���� ������ ����

    switch (rank)  // rank�� ���� ���� �б�
    {
    case 1:  // rank�� 1�� ���
        m = 300;  // m�� 300�� ����
        break;  // case 1���� ������ ������ switch���� ����
    case 2:  // rank�� 2�� ���
        m = 200;  // m�� 200�� ����
        break;  // case 2���� ������ ������ switch���� ����
    case 3:  // rank�� 3�� ���
        m = 100;  // m�� 100�� ����
        break;  // case 3���� ������ ������ switch���� ����
    default:  // rank�� 1, 2, 3�� �ƴ� �ٸ� ���� ���
        m = 10;  // m�� 10�� ����
        break;  // default���� ������ ������ switch���� ����
    }

    printf("m : %d\n", m);  // m ���� ���

    return 0;  // ���α׷� ���� ����
}
