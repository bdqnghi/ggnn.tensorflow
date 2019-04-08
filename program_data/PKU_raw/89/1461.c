int main()
{
    int a[100001][3];
    int b[3][100001];
    int n,i,j,h,c,d,p;
    h=p=0;
    scanf("%d",&n);
    for(i=1;;i++)
    {
        scanf("%d %d",&a[i-1][0],&a[i-1][1]);
        if(a[i-1][0]==0&a[i-1][1]==0)
        break;
        h=h+1;
    }
    for(i=1;i<=h;i++)
    {
        c=d=0;
        for(j=1;j<=p;j++)
        {
            if(b[0][j-1]==a[i-1][1])
            {
                c=1;
                break;
            }
            d=d+1;
        }
        if(c==0)
        {
            b[0][p]=a[i-1][1];
            b[1][p]=1;
            p=p+1;
        }
        else
        b[1][d]=b[1][d]+1;
    }
    for(i=1;i<=p;i++)
    if(b[1][i-1]==n-1)
    printf("%d\n",b[0][i-1]);
    if(p==0)
    printf("NOT FOUND");
    return 0;
}