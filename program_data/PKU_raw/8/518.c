void main()
{
    void toy(int d[1000],int e);
    void tx(int f[1000],int g[1000],int h,int k);
    int n,m,i;
    int a[1000],b[1000],c[1000];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    toy(a,n);
    toy(b,m);
    tx(a,b,n,m);
    printf("%d",a[0]);
    for(i=1;i<n+m;i++)
    printf(" %d",a[i]);
}
void toy(int d[1000],int e)
{
    int p,q,r;
    for(p=0;p<e-1;p++)
    {
        for(q=e-2;q>=0;q--)
        {
            if(d[q]>d[q+1])
            {
                r=d[q];
                d[q]=d[q+1];
                d[q+1]=r;
            }
        }
    }
}
void tx(int f[1000],int g[1000],int h,int k)
{
    int x;
    for(x=h;x<h+k;x++)
    f[x]=g[x-h];
}