int main()
{
    int num[101][101];
    int i,j,row,col;
    //freopen("1.txt","r",stdin);
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++)
    for(j=1;j<=col;j++)
    scanf("%d",&num[i][j]);
    printf("%d",num[1][1]);
    for(i=3;i<=col+row;i++)
    {
                           for(j=1;j<i;j++)
                           if(j<=row&&i-j<=col)
                           printf("\n%d",num[j][i-j]);
    }
    //getch();
    return 0;
}
