int main()
{
	int m,n;
	int a[20][20];
	int i,j;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			int t=1;
			if(i-1>=0)
			{
				if(a[i][j]<a[i-1][j])
					t=0;
			}
			if(i+1<m)
			{
				if(a[i][j]<a[i+1][j])
					t=0;
			}
            if(j-1>=0)
			{
				if(a[i][j]<a[i][j-1])
					t=0;
			}
			if(j+1<n)
			{
				if(a[i][j]<a[i][j+1])
					t=0;
			}
			if(t==1)
				printf("%d %d\n",i,j);
		}
	}
	return 0;
}