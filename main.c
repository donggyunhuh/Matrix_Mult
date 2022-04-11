int arr[100][2];
int d[100][100];

int makeArray(int n)   //행렬 만들기
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

    printf("행렬의 갯수: ", n);
    scanf("%d", &n);

    makeArray(n);

    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = i; j <= n; j++) {
            d[k][j] = min(k, j);
            k++;
        }
    }

    printf("============d[i][j]============\n");  //연산 횟수 나타내기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %d ", d[i][j]);
        }
        printf("\n");
    }

    minmult = d[0][n - 1];

    printf("최소 연산 횟수: %d", minmult);

    return 0;
}