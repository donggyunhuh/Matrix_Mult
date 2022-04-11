#include <stdio.h>

int arr[100][2]; // 2차원 행렬 선언
int d[100][100]; // 최솟값 저장

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


int makeArray(int n)  //행렬만들기
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

    printf("행렬의 갯수: ");
    scanf("%d", &n);

    makeArray(n);


    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = i; j < n; j++) {
            d[k][j] = min(k, j);
            k++;
        }
    }

    printf("=========d[i][j]============\n");   //연산 행렬
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", d[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    minmult = d[0][n - 1];

    printf("최소 연산 횟수: %d", minmult);

    return 0;
}