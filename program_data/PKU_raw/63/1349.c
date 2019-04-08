/* Note:Your choice is C IDE */
int main()
{
    int a[200][200],b[200][200],c[200][200];
    int m,n,p,i,j,k,r;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
    scanf("%d%d",&n,&p);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=p;j++)
    	{
    		scanf("%d",&b[i][j]);
    	}
    }
    for(i=1;i<=m;i++)
    {
    	for(j=1;j<=p;j++)
    	{
    		c[i][j]=0;
    		for(k=1;k<=n;k++)
    		{
    			c[i][j]=c[i][j]+a[i][k]*b[k][j];
    		}
    	}
    }
    for(i=1;i<m;i++)
    {
    	for(j=1;j<=p;j++)
    	{
    		if(j!=p) printf("%d ",c[i][j]);
    		else printf("%d\n",c[i][j]);
    	}
    }
    for(j=1;j<=p;j++)
    {
    	if(j!=p) printf("%d ",c[i][j]);
    	else printf("%d",c[i][j]);
    }
    return 0;
}