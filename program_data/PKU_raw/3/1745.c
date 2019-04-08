int main()
{
	int n,k,i;
	int *a;
	scanf("%d %d",&n,&k);
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[i]+a[i+j]==k)
			{
				printf("yes");
				return 0;
			}
		}
	}
	printf("no");
return 0;
}

