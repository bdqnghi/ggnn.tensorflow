int main()
{
    int a[100],b[100],m,n,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0,i=n-m;j<=m-1;j++,i++)
    b[j]=a[i];
    for(j=0;j<m;j++)
    {
        if(j==0)
        printf("%d",b[j]);
        else
        printf(" %d",b[j]);
    }
    for(i=0;i<n-m;i++)
    printf(" %d",a[i]);
    return 0;
}

