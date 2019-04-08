int Compare(const void *elem1,const void *elem2)
{
	return *((int *)elem1)-*((int *)elem2);
}
int main()
{
	int m,n;
		int i;
	scanf("%d %d",&m,&n);
int a[m],b[n];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	qsort(a,m,sizeof(int),Compare);
	qsort(b,n,sizeof(int),Compare);
	for(i=0;i<m;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",b[i]);
	}
	printf("%d",b[n-1]);
}
