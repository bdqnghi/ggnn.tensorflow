void main ()
{
    void f(int array[],int k);
    void g(int c[],int d[],int o,int p);
    int n,m,a[200],b[100],i,j,e[200],z;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=m-1;j++)
    {
        scanf("%d",&b[j]);
    }
    f(a,n);
    f(b,m);
    g(a,b,n,m);
    for(z=0;z<n+m-1;z++)
    {
        printf("%d ",a[z]);
    }
    printf("%d",a[n+m-1]);
}
void f(int array[],int k)
{
    int r,s,t;
    for(r=0;r<k-1;r++)
       for(s=0;s<k-1-r;s++)
          if(array[s]>array[s+1])
          {
              t=array[s];array[s]=array[s+1];array[s+1]=t;
          }
}
void g(int c[],int d[],int o,int p)
{
    int u;
    for(u=o;u<=o+p-1;u++)
    {
        c[u]=d[u-o];
    }
}
