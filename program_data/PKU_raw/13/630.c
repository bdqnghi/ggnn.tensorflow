int main()
{
	int a[20000],n,i,j,k;
	i=0;
	k=1;
	scanf("%d",&n);
	if(n==1)
	{
		scanf("%d",&a[i]);
	    printf("%d",a[i]);
	}
	else
	{
		scanf("%d",&a[i]);
	    printf("%d",a[i]);
		for(i=1;i<n;i++,k++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(k<(n-1))
		{if(i==j)
		printf(" %d",a[i]);}
		else
		{
				for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
				if(i==j)
			printf(" %d",a[i]);
		}
	}}
	return 0;
}

