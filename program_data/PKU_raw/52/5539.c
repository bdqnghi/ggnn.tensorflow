int main()
{
    int m,n,i,a[101],b[101];
    scanf("%d %d",&n,&m);   
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
     if(i<=m)
     b[i]=a[n-m+i];
     else
     b[i]=a[i-m];
    }
    printf("%d",b[1]);
    for(i=2;i<=n;i++)
    {
                     printf(" %d",b[i]);
    }
    return 0;
}