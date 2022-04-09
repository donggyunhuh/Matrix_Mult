#include <stdio.h>

int arr[100][2]; // 2차원 행렬 선언
int d[100][100]; // 최솟값 저장햣

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

int main()
{

    int a;           // 행렬의 개수 설정
    scanf("%d", &a); // 행렬 수 받음

    for (int i = 1; i <= a; i++)
        scanf("%d %d", &arr[i][0], &arr[i][1]); // ㅁ x ㅁ  행렬 i수에 따라 받음

    for (int i = 1; i <= a; i++)
    {
        int k = 1;
        for (int j = i; j <= a; j++)
        {
            d[k][j] = min(k, j); // min(1,1) + min(1,2) ~ min(k, j)
            k++;
        }
    }

    printf("%d\n", d[1][a]); // 최소 곱셈 값 출력

    return 0;
}