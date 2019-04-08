int main()
{
    int m,n,i,j,x,y,aaa,bbb;
    int num[9][9][5]={{0}};
    scanf("%d %d",&m,&n);
    num[4][4][0]=m;
    for (i=0;i<=n-1;i++)
    {
        aaa=0;
        bbb=0;
        for (x=0;x<=8;x++)
        {
            for (y=0;y<=8;y++)
            {
                if (num[y][x][i]!=0)
                {
                    num[y-1][x-1][i+1]+=num[y][x][i];
                    num[y-1][x][i+1]+=num[y][x][i];
                    num[y-1][x+1][i+1]+=num[y][x][i];
                    num[y][x-1][i+1]+=num[y][x][i];
                    num[y][x+1][i+1]+=num[y][x][i];
                    num[y+1][x-1][i+1]+=num[y][x][i];
                    num[y+1][x][i+1]+=num[y][x][i];
                    num[y+1][x+1][i+1]+=num[y][x][i];
                    num[y][x][i+1]+=2*num[y][x][i];
                    aaa++;
                }
                if (aaa==(2*i+1)*(2*i+1))
                {
                    bbb=1;
                    break;
                }
            }
            if (bbb==1)break;
        }
    }
    for (y=0;y<=8;y++)
    {
        for (x=0;x<=8;x++)
        {
            if (x==8)
            {
                printf("%d",num[y][x][n]);
            }
            else
            printf("%d ",num[y][x][n]);
        }
        printf("\n");
    }
    return 0;
}
