int main()
{
	int sz[300];
	int flag[300];
	int new[300];
	int i,j;
	int n;
	int count=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
		flag[i]=0;
	}
	new[0]=sz[0];
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(sz[i]==sz[j])
			{
				flag[i]=1;
				count++;
			}
		}
	}
	printf("%d",new[0]);
	for(j=1,i=1;j<n&&i<n;i++)
    {
		if(flag[i]==0)
		{
			new[j]=sz[i];
			printf(",%d",new[j]);
			j++;
		}
	}
	return 0;
}
		