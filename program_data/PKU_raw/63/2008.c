int main()
{
	int a[100][100],b[100][100];
	int m,q,n,i,j;
	scanf("%d %d",&m,&q);
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
			scanf("%d",&a[i][j]);
	
	scanf("%d %d",&q,&n);              //?????q???????!!!!????q???~ 
	for(i=0;i<q;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
			
	int c[100][100]={0},k;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			for(k=0;k<q;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=n-1)
				printf("%d ",c[i][j]);
			else
				printf("%d\n",c[i][j]);
		}
	}
	return 0;
}
