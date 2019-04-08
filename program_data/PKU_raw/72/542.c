int main()
{
	int m ,n ;
	scanf(" %d%d ",&m,&n);
	int i, j, k=0,p ;
	int a[100][100];
	int hs[100],ls[100];
	for(i=-1;i<m+1;i++)
	{
		for(j=-1;j<n+1;j++)
		{
			if(i==-1||i==m||j==-1||j==n)
				a[i][j]=0;
		}
	}
 	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
			{
				hs[k]=i;
				ls[k]=j;
				k++;
			}
				
		}
	}
	for(p=0;p<k;p++)
		printf("%d %d\n",hs[p],ls[p]);


	return 0;



}