main()
{
 int n,a[100][2];
 int f(int a,int b);
 scanf("%d",&n);
 for(int i=0;i<n;i++) scanf("%d %d",&a[i][0],&a[i][1]);
 for(int i=0;i<n;i++) printf("%d\n",f(a[i][0],a[i][1]));
}
int f(int a,int b)
{
    int k[101][101];
    for(int i=0;i<=101;i++) 
    {
        k[0][i]=1;
        k[1][i]=1;
        k[i][1]=1;
    }
    for(int i=1;i<=101;i++)
    {
        for(int j=2;j<=101;j++)
        {
            if(i<j) k[i][j]=k[i][j-1];
            else k[i][j]=k[i][j-1]+k[i-j][j];
        }
    }
    return k[a][b];
}