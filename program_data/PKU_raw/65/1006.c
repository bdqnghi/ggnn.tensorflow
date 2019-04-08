int main()
{
	int n,i,p=0,q=0,sz[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&sz[i][0],&sz[i][1]);
		if(sz[i][0]==0)
		{
			if(sz[i][1]==1)
			{
				p++;
			}
			if(sz[i][1]==2)
			{
				q++;
			}
		}
		if(sz[i][0]==1)
		{
			if(sz[i][1]==2)
			{
			    p++;
			}
			if(sz[i][1]==0)
			{
				q++;
			}
		}
		if(sz[i][0]==2)
		{
			if(sz[i][1]==0)
			{
				p++;
			}
			if(sz[i][1]==1)
			{
				q++;
			}
		}
	}
		if(p>q)
		{
			printf("A");
		}
		if(p==q)
		{
			printf("Tie");
		}
		if(p<q)
		{
			printf("B");
		}
		return 0;
}
		
