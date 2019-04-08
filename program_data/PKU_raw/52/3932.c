int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",a[n-m]);
    for(i=n-m+1;i<n;i++)
    printf(" %d",a[i]);
    for(i=0;i<(n-m);i++)
    printf(" %d",a[i]);
    getchar();
    getchar();
}