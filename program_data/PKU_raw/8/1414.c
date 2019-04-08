int main()
{
    int au(int x,int y);
    int x,y;
    scanf("%d%d",&x,&y);
    au(x,y);

}
int au(int x,int y)
{
    int a[100],b[100],i,j,m,n;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<y;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<x;i++)
    {
        for(m=0;m<x-i-1;m++)
        {
            if(a[m]>a[m+1])
            {
                int t=a[m];
                a[m]=a[m+1];
                a[m+1]=t;
            }
        }
    }
    for(j=0;j<y;j++)
    {
        for(n=0;n<y-j-1;n++)
        {
            if(b[n]>b[n+1])
            {
                int t=b[n];
                b[n]=b[n+1];
                b[n+1]=t;
            }
        }
    }
    for(m=x;m<x+y;m++)
    {
        a[m]=b[m-x];
    }
    for(m=0;m<x+y-1;m++)
    {
        printf("%d ",a[m]);
    }
    printf("%d",a[x+y-1]);
}
