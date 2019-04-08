	int main()
	{
		int n,i,k,x;
		int sz[20000];
		scanf("%d",&n);
		scanf("%d",&sz[0]);
		printf("%d",sz[0]);
		for(i=1;i<n;i++)
		{
			scanf("%d",&sz[i]);	
			x=0;
				for(k=0;k<i;k++)
				{

					if(sz[i]==sz[k])
					{
					break;
					}
					else if(sz[i]!=sz[k])
					{
						x++;
					}
					if(x==i)
					{
						printf(" %d",sz[i]);
					}
				}
		}
		
			return 0;
	}