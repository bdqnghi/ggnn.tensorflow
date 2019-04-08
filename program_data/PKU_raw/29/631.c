int main()
{
    double a[1000],b[1000];
    double c[1000];
    double sum=0;
    int n,m,i,j;
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        scanf("%d",&n);
        a[0]=2,b[0]=1;
        sum=2.0;
        for(i=1;i<n;i++)
        {
           a[i]=a[i-1]+b[i-1];
           b[i]=a[i-1];
           c[i]=a[i]/b[i];
           sum+=c[i];
        }
        printf("%.3lf\n",sum);
    }
    return 0;
}