#include <stdio.h>

int arr[100][2]; // 2���� ��� ����
int d[100][100]; // �ּڰ� ����

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


int makeArray(int n)  //��ĸ����
{
    for (int i = 0; i < n; i++) {
        printf("arr[%d][0]: ", i);
        scanf("%d", &arr[i][0]);
        printf("arr[%d][0]: ", i);
        scanf("%d", &arr[i][1]);
        printf("\n");
    }

    return arr[n][2];
}

int main()
{
    int n, minmult;

    printf("����� ����: ");
    scanf("%d", &n);

    makeArray(n);


    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = i; j < n; j++) {
            d[k][j] = min(k, j);
            k++;
        }
    }

    printf("=========d[i][j]============\n");   //���� ���
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", d[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    minmult = d[0][n - 1];

    printf("�ּ� ���� Ƚ��: %d", minmult);

    return 0;
}