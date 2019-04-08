int main()
{
    int a[1001][1001];
    int n,i,j,k,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n-2;j++)
    	{
    		if(a[i][j]==0)
    		{
    			for(k=j+1;k<=n;k++)
    			{
    				if(a[i][k]==0)
    				{
    					s=s+(k-j-1);
    					break;
    				}
    			}
    		}
    	}
    }
    printf("%d",s);
    return 0;
}