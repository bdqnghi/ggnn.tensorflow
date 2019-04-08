int main()
{
    int i,j,k,l,m,n,a[400],b[400];
    float x=0,y=0;
    memset(a,0,sizeof(a)); memset(b,0,sizeof(b));
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        x=x+a[i];
    }
    x=(float)x/n;
    for (i=1;i<n;i++)
        for (j=i+1;j<=n;j++)
            if (a[i]>a[j]) 
            {
               k=a[i]; a[i]=a[j]; a[j]=k;
            }
    for (i=1;i<=n;i++)
        if (fabs(a[i]-x)>y) y=fabs(a[i]-x);
    l=0;
    for (i=1;i<=n;i++)
        if (fabs(fabs(a[i]-x)-y)<0.0001) 
        {
           l++;
           b[l]=a[i];
        }
    for (i=1;i<l;i++)
        printf("%d,",b[i]);
    printf("%d",b[l]);
}
