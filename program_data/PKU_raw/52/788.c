int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int shu[100];
    for(int i=0;i<n;i++)
    {
            scanf("%d",&shu[i]);
    }
    int*p;
    p=&shu[n-1];
    int a;
    a=n-m;
    for(int i=0;i<m+n;i++)
    {
        p++;
        *p=shu[i];
    }
    for(int i=a;i<2*n-m-1;i++)
    {
        printf("%d ",shu[i]);
    }
    printf("%d",shu[2*n-m-1]);
    getchar();
    getchar();
    getchar();
    return 0;
}
                       
