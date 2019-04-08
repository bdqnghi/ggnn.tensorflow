int main()
{
	int n,k,i,j,m;
	int a[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			m=a[i]+a[j];
			if(m==k)
			{
				printf("yes");
				break;
			}
		}
		if(m==k) break;
		if(i==n-1&&m!=k)
			printf("no");
	}
	
		
	
	return 0;
}