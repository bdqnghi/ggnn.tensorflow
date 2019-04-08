int t[10001];
int comp ( const void *a, const void *b )
{
    return * ( int * ) a - * ( int * ) b;
}
int main()
{

   int i,n;
   scanf("%d",&n);
    for(i=0;i<n;i++)

    scanf("%d",&t[i]);
    qsort(t,n,sizeof(int),comp);
    for(i=0;t[i]%2;i++)
    printf("%d",t[i]);
    for(;i<n;i++)
    if(t[i]%2)
    printf(",%d",t[i]);
    return 0;
}

