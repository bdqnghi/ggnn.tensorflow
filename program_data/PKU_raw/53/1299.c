int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[301],b[301];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{b[j]=0;}
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==1)
		{
			printf(",%d",a[i]);
		}
	}
	printf("\n");
	return 0;
}
