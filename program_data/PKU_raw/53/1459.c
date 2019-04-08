int main()
{
	int n,sz[300],sz1[300],i=0,j=0,i1=0,b=0,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	printf("%d",sz[0]);sz1[0]=sz[0];i=1;
	for(i=1;i<n;i++)
	{
		for(i1=0;i1<=j;i1++)
		{   b=0;
			if(sz1[i1]==sz[i])
			{
				b=1;break;
			}
		}
		if(b==0)
		{
			j++;
			sz1[j]=sz[i];
		}
	}
	for(i1=1;i1<=j;i1++)
	{
		printf(",%d",sz1[i1]);
	}
	return 0;
}

			

