int main()
{
	int n,i,j,amount=0;
	static int a[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		do
		{
			scanf("%d",&a[i]);
		}
		while(a[i]==' ');
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if (a[j]==a[i])
				goto no;
		}
		if(amount==0)
			printf("%d",a[i]);
		else
			printf(",%d",a[i]);
		amount=amount+1;

no:		continue;
	}
	return 0;
}