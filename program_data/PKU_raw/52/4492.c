void main()
{
    int a[100],b[100],n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0,i=n-m;i<n;j++,i++)
    b[j]=a[i];
    for(i=0,j=m;j<n;i++,j++)
    b[j]=a[i];
    for(i=0;i<n-1;i++)
    printf("%d ",b[i]);
    if(i=n-1) printf("%d",b[i]);
}