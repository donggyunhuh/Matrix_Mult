//
// Created by j2bom on 2022-04-09.
//
// 2022-04-10 최종수정.
//최대한 책에 있는 알고리즘에 맞춰 구현해보도록 노력했습니다.
// main함수는 고려안하고 한 점 이해부탁드립니다.

int arr[100][2]; // 2차원 행렬 선언
int d[100][100]; // 최솟값 저장

int min(int n)
{
    for (int diag = 1; diag <= n; diag++)
    {

        for (i = 1; i <= n; i++)
        {
            j = diag + i;
            if (i == j)
                if (i == j) //같은 행렬끼리 곱하면 0
                    return 0;
                else
                {
                    d[i][j] = 999999999;
                    d[i][j] = 999999999; //최솟값을 구하려면 나올 수 있는 가장 큰 수와 비교했을 때 더 커야함
                    for (int k = i; k < j; k++)
                    {
                        int temp = d[i][k] + d[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1];
                        int temp = d[i][k] + d[k + 1][j] + arr[i][0] * arr[k][1] * arr[j][1]; //점화식중 오른쪽

                        if (temp < d[i][j])
                            if (temp < d[i][j]) //더 작은 값이 최솟값이 되므로
                                d[i][j] = temp;
                    }
                }
        }
    }
    return d[1][n];
}
