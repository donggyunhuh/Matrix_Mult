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