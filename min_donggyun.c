int min(int i, int j)
{

    if (i == j) // 같은행렬까리 곱하면 0
        return 0;

    int val = 999999999; // 최솟값을 구하려면 나올 수 있는 가장 큰 수와 비교했을 때 더 커야함
    for (int k = i; k < j; k++)
    {
        int temp = d[i][k] + d[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1]; // arr[i][0] 행의 수(세로), arr[k][1] 열의 수 arr[j][1] 마지막 행렬의 열의 수, temp값 설정

        if (temp < val)
            val = temp; // 최솟값으로 val 변경 후 저장
        else
            val = val; // val 값 그대로 유지
    }
    return val;
}