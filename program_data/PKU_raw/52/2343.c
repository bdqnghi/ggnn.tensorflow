int main()
{
    int n,m,i,k;
    scanf("%d%d",&n,&m);
    int a[100];
    for(i=1;i<=n;i++)
    {
		scanf("%d",&a[i]);
    }
    int *num=a;
    for(i=n-m+1;i<=n;i++)
    {
		k=*(num+i);
		printf("%d",k);
		printf(" ");
    }
    for(i=1;i<=n-m-1;i++)
    {
		k=*(num+i);
		printf("%d",k);
		printf(" ");
    }
    printf("%d",a[n-m]);
    return 0;
}