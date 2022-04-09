#include <stdio.h>

int arr[100][2]; // 2���� ��� ����
int d[100][100]; // �ּڰ� �����w

int min(int i, int j)
{

    if (i == j) // ������ı ���ϸ� 0
        return 0;

    int val = 999999999; // �ּڰ��� ���Ϸ��� ���� �� �ִ� ���� ū ���� ������ �� �� Ŀ����
    for (int k = i; k < j; k++)
    {
        int temp = d[i][k] + d[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1]; // arr[i][0] ���� ��(����), arr[k][1] ���� �� arr[j][1] ������ ����� ���� ��, temp�� ����

        if (temp < val)
            val = temp; // �ּڰ����� val ���� �� ����
        else
            val = val; // val �� �״�� ����
    }
    return val;
}

int main()
{

    int a;           // ����� ���� ����
    scanf("%d", &a); // ��� �� ����

    for (int i = 1; i <= a; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]); // �� x ��  ��� i���� ���� ����

    for (int i = 1; i <= a; i++)
    {
        int k = 1;
        for (int j = i; j <= a; j++)
        {
            d[k][j] = min(k, j); // min(1,1) + min(1,2) ~ min(k, j)
            k++;
        }
    }

    printf("%d\n", d[1][a]); // �ּ� ���� �� ���

    return 0;
}