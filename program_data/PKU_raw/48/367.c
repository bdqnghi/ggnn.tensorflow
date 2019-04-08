
int main()
{
	int a[9][9],b[9][9];
	int n,m,i,j,k;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=0;
			b[i][j]=0;
		}
	}
	scanf("%d%d",&m,&n);

	a[4][4]=m;
	b[4][4]=m;
	for(k=0;k<n;k++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				
				if(b[i][j]!=0)
				{
					a[i][j]=b[i][j]+a[i][j];
					a[i-1][j]=b[i][j]+a[i-1][j];
					a[i-1][j-1]=b[i][j]+a[i-1][j-1];
					a[i][j-1]=b[i][j]+a[i][j-1];
					a[i+1][j-1]=b[i][j]+a[i+1][j-1];
					a[i+1][j]=b[i][j]+a[i+1][j];
					a[i][j+1]=b[i][j]+a[i][j+1];
					a[i+1][j+1]=b[i][j]+a[i+1][j+1];
					a[i-1][j+1]=b[i][j]+a[i-1][j+1];
				}				
			}
		}	
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				b[i][j]=a[i][j];
			}
		}
	}

	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			printf("%d",b[i][j]);
			if(j!=8)
				printf(" ");
			else
				printf("\n");
		}
	}	
	return 0;
}
