	int main()
	{
		int n,i,t,shan,p,s;
		
		scanf("%d",&n);
		s=n;
		int sz[100000];
		for(i=0;i<n;i++)
		{
			scanf("%d",&sz[i]);
		}
		scanf("%d",&shan);	
			 for(i=0;i<s;i++)
			{  
				if(sz[i]==shan)
				{
					t=sz[i];
					for(p=i;p<n;p++)
					{
						sz[p]=sz[p+1];
					}
					sz[n-1]=t;
					s--;
					i--;
				}	
			}
		
	
			for(i=0;i<s-1;i++)
			{
				
				printf("%d ",sz[i]);
				
			}
			printf("%d",sz[s-1]);
	
			return 0;
	}