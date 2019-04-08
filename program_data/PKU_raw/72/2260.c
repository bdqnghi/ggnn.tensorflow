
int main(int argc, char* argv[])
{
	int m,n,a[20][20],b[24][24],i,j;
	scanf("%d%d",&m,&n);
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<m+2;i++)
	{
		for (j=0;j<n+2;j++)
		{
			b[i][j]=0;
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			b[i+1][j+1]=a[i][j];
		}
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (b[i+1][j+1]+1>b[i][j+1]&&b[i+1][j+1]+1>b[i+1][j]&&b[i+1][j+1]+1>b[i+1][j+2]&&b[i+1][j+1]+1>b[i+2][j+1])
			{
				printf("%d %d\n",i,j);
			}
		}
	}


	
	
	return 0;


	
}
