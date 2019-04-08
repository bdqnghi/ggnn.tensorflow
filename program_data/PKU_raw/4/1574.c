int main()
{
	int a[100][100],i,j,p,m,n;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(p=0;p<=m+n-2;p++)
	{   
		for(i=0;i<=p;i++)
		{
			if(i<m&&p-i<n)
				printf("%d\n",a[i][p-i]);
			else continue;
		}
	}
	return 0;
}

			
