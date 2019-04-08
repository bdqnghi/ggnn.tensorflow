void main()
{
    void f(int *p,int n,int m);
    int a[50],n,m,i;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    f(a,n,m);    
    for(i=1;i<n;i++)
    printf("%d ",a[i]);
    printf("%d\n",a[n]);
}

void f(int *p,int n,int m)
{
    int i,t,*q;
    for(i=1;i<=m;i++)
    {
       t=*(p+n);
       for(q=p+n;q>p+1;q--)
       *q=*(q-1);     
       *q=t;
    }
}
