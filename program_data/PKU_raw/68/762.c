int main()
{
    int a[50000]={0};
    long d[5134];
    long i,j,x,n;
    for (i=2;i<=49999;i++)
    if (a[i]==0)
    {
      x=sqrt(i);
      for (j=2;j<=x;j++)
       if (i%j==0) break;
      if (j>x) {n=2;while (n*j<=50000){a[n*j]=1;n=n+1;}}
        }
    x=0;
    for (i=2;i<=49999;i++)
     if (a[i]==0) {x=x+1;d[x]=i;}
    scanf("%ld",&n);
    for (i=6;i<=n;)
    {
       for (j=1;j<=x;j++)
       if (a[i-d[j]]==0) {printf("%ld=%ld+%ld\n",i,d[j],i-d[j]);break;}
     i=i+2;   }
    }
