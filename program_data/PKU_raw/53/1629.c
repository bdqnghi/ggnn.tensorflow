
int main()
{
	int num[100],n=0,i=0,j=0,k=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&num[i]);
		i++;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]==num[j]&&num[i]!=-1)
			{
				num[j]=-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(num[i]==-1)
			continue;
		else
		if(i==0)
		printf("%d",num[i]);
		else
			printf(",%d",num[i]);
	}
	return 0;
}
