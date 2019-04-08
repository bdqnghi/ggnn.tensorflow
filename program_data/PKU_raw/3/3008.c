int main()
{
	int n,k,a[1000],i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				printf("yes");
				break;
			}
		}
		if(a[i]+a[j]==k)
			break;
		if(i==n-2)
			printf("no");
	}
	return 0;
}

			


		



			




