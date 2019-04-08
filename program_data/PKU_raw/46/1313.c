int main()
{
	int a[100][100];
	int m,n,i,j,k;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
    for(k=0;2*k<m&&2*k<n;k++)
    {
    	for(i=k,j=k;j<n-k-1;j++)
    	{
    		printf("%d\n",a[i][j]);
    	}
    	for(;i<m-k-1;i++)
    	{
    		printf("%d\n",a[i][j]);
    	}
    	if(i==k||j==k)
    	{
    		printf("%d\n",a[i][j]);
    		break;
    	}
    	for(;j>k;j--)
    	{
    		printf("%d\n",a[i][j]);
    	}
    	for(;i>k;i--)
    	{
    		printf("%d\n",a[i][j]);
    	}
    }
    return 0;
}