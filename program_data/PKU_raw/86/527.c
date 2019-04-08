int main()
{
	int n,m,i,sz[20]={0};
	scanf("%d",&n);
	while (n>0)
	{
		scanf("%d",&m);
		if(m==0)
		{
			printf("%d\n",60);
		}
		else
		{
		for(i=0;i<m;i++)
		{
			scanf("%d",&sz[i]);
		}
		for(i=m-1;i>=0;i--)
		{
			if(sz[i]+3*i>60)
			{
				continue;
			}
			else
			{
				if(sz[i]+3*i<57)
				{   
		 		printf("%d\n",57-3*i);
				break;
				}
		    	else
				{
			    	printf("%d\n",sz[i]);
				   break;
				}
			}
		}
		}
		n--;
		}
		return 0;
	}
