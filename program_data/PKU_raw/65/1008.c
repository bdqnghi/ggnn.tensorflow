int main()
{
	int n,a[200],b[200],i,sum1=0,sum2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==b[i])
			continue;
		else if(a[i]==0 && b[i]==1)
			sum1++;
		else if(a[i]==0 && b[i]==2)
			sum2++;
		else if(a[i]==1 && b[i]==0)
			sum2++;
		else if(a[i]==1 && b[i]==2)
			sum1++;
		else if(a[i]==2 && b[i]==0)
			sum1++;
		else if(a[i]==2 && b[i]==1)
			sum2++;
	}
	if(sum1==sum2)
		printf("Tie\n");
	if(sum1>sum2)
		printf("A\n");
	if(sum2>sum1)
		printf("B\n");
	return 0;
}

	