int main()
{
    int n,i,j,t,x,a[1000],b[1000];
    scanf("%d",&n);
    for (i=1;i<=n;i++) scanf("%d",&a[i]);
    float s=0;
    for (i=1;i<=n;i++) s=s+a[i];
    s=s/n;
    float max=0;
    for (i=1;i<=n;i++)
    {
        if (fabs(a[i]-s)>max) 
        {
          max=fabs(a[i]-s);
          t=1;
          b[t]=a[i];
          continue;
        }
        if (fabs(a[i]-s)==max)
        {
          t++;
          b[t]=a[i];
        }
    }
    for (i=1;i<=t-1;i++)
    for (j=i+1;j<=t;j++)
    if (b[i]>b[j])
    {
      x=b[i];
      b[i]=b[j];
      b[j]=x;
    }
    for (i=1;i<=t-1;i++) printf("%d,",b[i]);
    printf("%d",b[t]);

}
