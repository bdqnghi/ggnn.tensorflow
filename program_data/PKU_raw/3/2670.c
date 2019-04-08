int main()
{
	int n,k,i,j,m=0;
	int sz[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=j+1;i<n;i++)
		{
			if(sz[i]+sz[j]==k)
			{
				printf("yes");
				m++;
				break;
			}
		}
		if(m!=0)
		{
			break;
		}
		if(j==n-2&&m==0)
		{
			printf("no");
		}
	}
return 0;
}