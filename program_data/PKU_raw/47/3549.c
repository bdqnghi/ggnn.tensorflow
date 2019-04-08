int a[100],sz[100];
void change(int sz[],int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	change(sz,n);
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[n-1]);
	return 0;
}
void change(int sz[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=sz[n-1-i];
	}
}