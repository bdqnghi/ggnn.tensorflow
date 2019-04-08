	int main()
	{
		int n,sz[1000000][2],i,k,s,p=0,t,m=0,f;
		scanf("%d",&n);
		sz[0][0]=1;
		for(i=0;1;i++)
		{  
			{
				scanf("%d%d",&sz[i][0],&sz[i][1]);
				p++;
				if((sz[i][0]==0)&&(sz[i][1]==0))
				{
					break;
				}
			}
		}

		for(k=0;k<n;k++)
		{	
			s=0;
			t=0;
			f=0;
			
			for(i=0;i<p-1;i++)
				{
					if(sz[i][1]==k)
					{
						s++;
					}
					if(sz[i][0]==k)
					{
						f=1;
						break;
					}
				
				}
			if((s==n-1)&&(f==0))
			{
				printf("%d",k);
				break;
			}
			else
			{
				m++;
			}
		}
		if(m==n)
		{
			printf("NOT FOUND");
		}
		return 0;
	}


