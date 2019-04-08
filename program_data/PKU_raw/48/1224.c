
int main(int argc, char* argv[])
{
	int a[9][9],b[10][10],i,j,k,m,n;
	scanf("%d%d",&m,&n);
	for (i=0;i<9;i++)
	{
		for (j=0;j<9;j++)
		{
			a[i][j]=0;
		}
	}
	a[4][4]=m;
	for (i=0;i<10;i++)
	{
		for (j=0;j<10;j++)
		{
			b[i][j]=0;
		}
	}
	for (k=0;k<n;k++)
	{
		for (i=0;i<9;i++)
		{
			for (j=0;j<9;j++)
			{
				b[i][j]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i][j+2]+=a[i][j];
				b[i+1][j]+=a[i][j];
				b[i+1][j+2]+=a[i][j];
				b[i+2][j]+=a[i][j];
				b[i+2][j+1]+=a[i][j];
				b[i+2][j+2]+=a[i][j];
                                    b[i+1][j+1]+=a[i][j]*2;
			}
		}
		for (i=0;i<9;i++)
		{
			for (j=0;j<9;j++)
			{
				a[i][j]=b[i+1][j+1];
				b[i+1][j+1]=0;
			}
		}
	}
	for (i=0;i<9;i++)
	{
		for (j=0;j<9;j++)
		{
			if (j==8)
			{
				printf("%d\n",a[i][j]);
			}
			else 
			{
				printf("%d ",a[i][j]);
			}
		}
	}
	return 0;


	
}