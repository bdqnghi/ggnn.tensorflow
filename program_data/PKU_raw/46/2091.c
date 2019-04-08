int main()
{
    int m,n;
    int q;
    scanf("%d %d",&m,&n);
    q=m*n;
    int sz[100][100];
    int i,j;
    for(i=0;i<m;i++)
    {
         for(j=0;j<n;j++)
        {scanf("%d",&sz[i][j]);}
    }
     int x;
     int p=0;
    for(x=0;x<=(m/2+1)&&x<=(n/2+1);x++)
    {
     for(j=x;j<=(n-x-1)&&x<=(n-x-1)&&p<q;j++)
     {printf("%d\n",sz[x][j]);
     p++;}
     for(i=x+1;i<=(m-x-1)&&(x+1)<=(m-x-1)&&p<q;i++)
     {printf("%d\n",sz[i][n-x-1]);
     p++;}
     for(j=(n-x-2);j>=x&&x<=(n-x-2)&&p<q;j--)
     {printf("%d\n",sz[m-1-x][j]);
     p++;}
     for(i=(m-2-x);i>=(x+1)&&(x+1)<=(m-2-x)&&p<q;i--)
     {printf("%d\n",sz[i][x]);
     p++;}
    }
    return 0;
}
