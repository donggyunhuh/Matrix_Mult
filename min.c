//
// Created by j2bom on 2022-04-09.
//

// 2022-04-10 ��������.
//�ִ��� å�� �ִ� �˰��� ���� �����غ����� ����߽��ϴ�.
// main�Լ��� ������ϰ� �� �� ���غ�Ź�帳�ϴ�.

int arr[100][2];
int d[100][100];

int min(int n)
{
    int i, j;
    for (int diag = 1; diag <= n; diag++)
    {
        for (i = 1; i <= n; i++)
        {
            j = diag + i;
            if (i == j)
                return 0;
            else
            {
                d[i][j] = 999999999;
                for (int k = i; k < j; k++)
                {
                    int temp = d[i][k] + d[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1];

                    if (temp < d[i][j])
                        d[i][j] = temp;
                }
            }
        }
    }

    return d[1][n];
}
