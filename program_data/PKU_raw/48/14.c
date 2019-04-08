int main()
{
	int n,m,i;
	int num[11][11],tem[11][11];
	int j,k;
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			num[i][j]=0;
			tem[i][j]=0;
		}
	}
	scanf("%d %d",&m,&n);
	num[5][5]=m;
    tem[5][5]=m;
	for(i=1;i<=n;i++)//i????
	{
		for(j=5-i;j<=5+i;j++)
		{
			for(k=5-i;k<=5+i;k++)
			{
				num[j][k]=tem[j-1][k-1]+tem[j][k-1]+tem[j+1][k-1]+tem[j-1][k]+tem[j+1][k]+tem[j+1][k+1]+tem[j][k+1]+tem[j-1][k+1]+2*tem[j][k];
			}
		}
	    for(j=5-i;j<=5+i;j++)
		{
			for(k=5-i;k<=5+i;k++)
			{
				tem[j][k]=num[j][k];
			}
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<9;j++)
		{
			printf("%d ",num[j][i]);
		}
		printf("%d\n",num[9][i]);
	}
	return 0;
}





