void main()
{
	int num[300],i,k=0,n,j;
	float aver,sub[300],sum=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	aver=sum/n;
	for (i=0;i<n;i++)
		sub[i]=fabs(num[i]-aver);
	for (i=0;i<n;i++)
		if (sub[i]>sub[k])
			k=i;
	for (i=0;i<n;i++)
		if (sub[i]==sub[k]&&i!=k)
		{
			if (num[i]>num[k])
			{
				j=num[i];
				num[i]=num[k];
				num[k]=j;
			}
			printf("%d,",num[i]);
			break;
		}
	printf("%d\n",num[k]);
}
