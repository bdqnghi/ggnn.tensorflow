
int main(int argc, char* argv[])
{
	int m,n,a;
	scanf("%d""%d",&m,&n);
	int num[5][9][9];
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
			{
				num[i][j][k]=0;
			}
		}
	}
	num[0][4][4]=m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<9;k++)
			{
				if(num[i][j][k]!=0)
				{
					a=num[i][j][k];
					num[i+1][j][k+1]=num[i+1][j][k+1]+a;
                    num[i+1][j][k-1]=num[i+1][j][k-1]+a;
                    num[i+1][j][k]=num[i+1][j][k]+2*a;
					num[i+1][j+1][k-1]=num[i+1][j+1][k-1]+a;
                    num[i+1][j+1][k+1]=num[i+1][j+1][k+1]+a;
                    num[i+1][j+1][k]=num[i+1][j+1][k]+a;
					num[i+1][j-1][k+1]=num[i+1][j-1][k+1]+a;
                    num[i+1][j-1][k-1]=num[i+1][j-1][k-1]+a;
                    num[i+1][j-1][k]=num[i+1][j-1][k]+a;
				}
			}
		}
	}
	for(j=0;j<9;j++)
	{
		for(k=0;k<8;k++)
		{
			printf("%d ",num[n][j][k]);
		}
		printf("%d\n",num[n][j][8]);
	}
	return 0;
}

