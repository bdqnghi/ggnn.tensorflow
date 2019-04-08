int main()
{
	int num1[11][11],num2[11][11],m,day,t,j,i,k;
	scanf("%d%d",&m,&day);
	for(i=0;i<11;i++)
	{
		for(j=0;j<11;j++)
		{
			num1[i][j]=0;
			num2[i][j]=0;
		}
	}
	num1[5][5]=m;
	for(k=1;k<=day;k++)
	{
		for(i=5-k;i<=5+k;i++)
		{
			for(j=5-k;j<=5+k;j++)
			{
				num2[i][j]=num2[i][j]+num1[i-1][j]+num1[i-1][j-1]+num1[i-1][j+1]+num1[i+1][j]+num1[i+1][j-1]+num1[i+1][j+1]+num1[i][j-1]+num1[i][j+1];
				num2[i][j]=num2[i][j]+2*num1[i][j];
			}
		}
	    for(i=0;i<11;i++)
		{
			for(j=0;j<11;j++)
			{
				num1[i][j]=num2[i][j];
			}
		}
		for(i=0;i<11;i++)
		{
			for(j=0;j<11;j++)
			{
				num2[i][j]=0;
			}
		}
	}
	for(i=1;i<10;i++)
	{
		for(j=1;j<9;j++)
		{
			printf("%d ",num1[i][j]);
		}
		printf("%d\n",num1[i][9]);
	}
	return 0;
}