/* Note:Your choice is C IDE */
int main()
{
    int i,j,k,p,a[100][100],s[100]={0},m,n;
    scanf("%d",&k);
    for(p=1;p<=k;p++)
    {
    	scanf("%d%d",&m,&n);
    	for(i=1;i<=m;i++)
    	{
    		for(j=1;j<=n;j++)
    		{
    			scanf("%d",&a[i][j]);
    		}
    	}
    	for(j=1;j<=n;j++)
    	{
    		s[p]=s[p]+(a[1][j]);
    	}
    	for(j=1;j<=n;j++)
    	{
    		s[p]=s[p]+(a[m][j]);
    	}
    	for(i=2;i<=m-1;i++)
    	{
    		s[p]=s[p]+a[i][1]+a[i][n];
    	}
    }
    printf("%d",s[1]);
    for(p=2;p<=k;p++)
    {
    	printf("\n%d",s[p]);
    }
    return 0;
}