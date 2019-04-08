int main()
{
	int n,k,i,j,ylf=0;
	int a[1000];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(i<n && ylf==0)
	{
		j=i+1;
		while(j<n && ylf==0)
		{
			if(a[i]+a[j]==k)
			{
				printf("yes");
				ylf=1;
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	if(ylf==0)
	{
		printf("no");
	}
	return 0;
}