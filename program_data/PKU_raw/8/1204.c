int compare(const void *a,const void *b)
{
    return *(int*)a-*(int*)b;
}
void Do(int m,int n)
{
    int a[m],b[n];
    int i;
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    qsort(a,m,4,compare);
    qsort(b,n,4,compare);
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
    for(i=0;i<n-1;i++)
    printf("%d ",b[i]);
    printf("%d\n",b[n-1]);
}
main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    Do(m,n);
}
