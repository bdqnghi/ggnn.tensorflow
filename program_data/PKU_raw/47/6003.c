int main()
{
    int n,i;
    scanf("%d\n",&n);
    int a[100],b[100];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[n-i-1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",b[i]);
    }
    printf("%d",b[n-1]);
    return 0;
}
