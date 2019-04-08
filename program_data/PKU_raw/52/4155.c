void make(int *p1,int n,int m)
{
    int *p2,b[100]={0},i;
    p2=b;
    for (i=n-m;i<n;i++)
     *p2++=*(p1+i);
    for (i=n-m-1;i>=0;i--)
     *(p1+i+m)=*(p1+i);
    p2=b;
    for (i=0;i<m;i++)
     *(p1+i)=*(p2+i);
}
int main()
{
    int *p,a[100],i,n,m;
    scanf("%d%d",&n,&m);
    for (i=0;i<n;i++) scanf("%d",&a[i]);
    make(a,n,m);
    p=a;
    for (i=0;i<n-1;i++)
      printf("%d ",*p++);
    printf("%d",*p);
}
