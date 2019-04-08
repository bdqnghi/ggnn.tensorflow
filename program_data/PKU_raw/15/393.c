int main()
{	
	int n,s[99][99],i,j,S,c,b,g,t;	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		for (j=0;j<n;j++)
			scanf("%d",&s[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			if(s[i][j]==0)	
			{		
				t=i;	
				g=j;	
				i=n+1;		
				break;	
			}	
		}
	}
	for(i=n-1;i>=0;i--)
	{	
		for(j=n-1;j>=0;j--)
		{		
			if(s[i][j]==0)	
			{		
			c=i;
			b=j;		
			i=-1;	
			break;	
		}	
		}
	}
	S=(c-t-1)*(b-g-1);
	printf("%d\n",S);
	return 0;
}
