int main()
{
	int n,i;
	int num[100];
	int a;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		if (num[0]<num[i])
		{
			a=num[i];
			num[i]=num[0];
			num[0]=a;
		}
	}
	for(i=2;i<=n-1;i++)
	{
		if (num[1]<num[i])
		{
			a=num[i];
			num[i]=num[1];
			num[1]=a;
		}
	}
	printf("%d\n%d\n",num[0],num[1]);
	return 0;
}