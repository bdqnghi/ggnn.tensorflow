int main()
{
	int n,a[10000],i,j,x=0;
	scanf("%d\n",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==0)
		continue;
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]==a[j])
			{
			a[j]=0;
		}
}
}
printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
	{
		if(a[i]!=0)
		printf(" %d",a[i]);
	
}
	return 0;
		
	
}