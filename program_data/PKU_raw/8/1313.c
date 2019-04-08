int Compare(const void *elem1, const void *elem2)
{
    return *((int *)(elem1)) - *((int *)(elem2));
}
int main()
{
    int M,N;
    scanf("%d%d",&M,&N);
    int a[100], b[100];
    int i;
    for(i=0;i<M;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,M,sizeof(int),Compare);
    for(i=0;i<M;i++)
    {
        printf("");
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
    qsort(b,N,sizeof(int),Compare);
    for(i=0;i<N;i++)
    {
        printf("");
    }
    int c[200];
    for(i=0;i<M;i++)
    {
        c[i]=a[i];
    }
    int j;
    for(j=0;j<N;j++,i++)
    {
        c[i]=b[j];
    }
    for(i=0;i<M+N-1;i++)
    {
        printf("%d ",c[i]);
    }
    printf("%d",c[i]);
}
