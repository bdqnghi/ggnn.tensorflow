void main()
{
	int n,i;
	int a[100000];
	scanf("%d/n",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("%d",a[0]);
	i=1;
	while(i<n)
	{
		int j=0,x=0;
		while(j<i)
		{
			if(a[i]==a[j])
			{
				x=1;
				break;
			}
			j++;
		}
		if(x==0)
		printf(" %d",a[i]);
		i++;
	}
}

