int main()
{
	int sz1[20000],sz2[20000],i,j,n,k;
	scanf("%d",&n);
	j=1;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&sz1[i]);
	}
	sz2[0]=sz1[0];
	for(i=1;i<=n-1;i++)
	{
		for(k=i-1;k>=0;k--)
		{
			if(sz1[i]==sz2[k])
			{
				break;
			}
			if(k==0)
			{
				sz2[j]=sz1[i];
				j=j+1;
			}
		}
	}
	for(i=0;i<=j-1;i++)
	{
		if(i==j-1)
		{
			printf("%d",sz2[i]);
		}
		else
		{
			printf("%d ",sz2[i]);
		}
	}
	return 0;
}
