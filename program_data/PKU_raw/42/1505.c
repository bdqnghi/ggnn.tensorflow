
int main()
{
	struct number
	{
		int num,status;
	}
	a[100000];
	int n,i,k;
	int count;
	int j=0;
	scanf("%d",&n);
	count=n;
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i].num);
		a[i].status=1;
	}
	scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i].num==k)
		{
			a[i].status=0;
			count--;
		}
	}
	for (i=0;i<n;i++)
	{
		if (a[i].status && j!=(count-1))
		{
			printf("%d ",a[i].num);
			j++;
		}
		else
			if (a[i].status && j==count-1)
			{
				printf("%d",a[i].num);
			}
	}
	return 0;
}