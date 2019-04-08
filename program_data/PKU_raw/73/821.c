main()
{
    int a[6][6];
    int ok = 1;
    for (int i = 1;i <=5;i ++)
        for (int j = 1;j <= 5;j ++)
            scanf("%d",&a[i][j]);
    for (int i = 1;i <= 5;i ++)
        for (int j = 1;j <= 5;j ++)
            if (a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4]&&a[i][j]>=a[i][5]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j]&&a[i][j]<=a[5][j])
                printf("%d %d %d",i,j,a[i][j]),ok = 0;
    if (ok)
        printf("not found");
}