int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int b[n];
    j=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        j--;
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",b[i]);
    }
    printf("%d",b[n-1]);
    
    
    return 0;
}