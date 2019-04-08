
int main()
{
    int n;
	scanf("%d ",&n);
	int sz[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&sz[i]);
	}
	for(int j=0;j<n;j++)
	{   
		if(j==0)
		{
			printf("%d",sz[j]);
		}
		else
		{   int x=j;
			for(int k=0;k<j;k++)
			{
                if(sz[j]!=sz[k])
				{
                 x--;   
				}
			}
				if(x==0)
				{
					printf(",%d",sz[j]);
				}
			
		}
	}
	return 0;
}


