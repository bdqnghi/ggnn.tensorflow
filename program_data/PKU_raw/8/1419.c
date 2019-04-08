void f(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[j]<a[i])
            {
                k=a[i];a[i]=a[j];a[j]=k;
            }
}
void cmp(int a[],int n,int b[],int m)
{   int i=n,j;
    for(j=0;j<m;j++)
    {a[i]=b[j];i++;}
}
int main()
{int n,m,i,a[1000],b[500];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    f(a,n);
    f(b,m);
    cmp(a,n,b,m);
    for(i=0;i<n+m-1;i++)
    printf("%d ",a[i]);
    printf("%d",a[n+m-1]);
}
