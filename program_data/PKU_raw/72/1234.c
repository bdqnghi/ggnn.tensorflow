
void main()
{
	int a[21][21],m,n,i,j;
	scanf("%d %d\n",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		if(a[0][0]>a[0][1]&&a[0][0]>a[1][0])
		printf("0 0\n");
	for(j=0;j<m+1;j++)
		a[j][n]=0;
	for(j=0;j<n+1;j++)
		a[m][j]=0;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i==0&&j==0)
				continue;
			if(j==0)
			{
				if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1])
					printf("%d %d\n",i,j);
			}
			else if(i==0)
				{
				if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
					printf("%d %d\n",i,j);
			}
			else if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i][j-1])printf("%d %d\n",i,j);
		}
}