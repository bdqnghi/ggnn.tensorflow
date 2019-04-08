int main()
{
	int i,j,k,a[5][11][11]={0},sum,days;
	scanf("%d %d",&sum,&days);
    a[0][5][5]=sum;
	for(i=1;i<=days;i++)
	{
		for(j=1;j<11;j++)
		{
			for(k=1;k<11;k++)
			{
				a[i][j][k]=a[i-1][j][k]*2+a[i-1][j-1][k]+a[i-1][j+1][k]+a[i-1][j][k-1]+a[i-1][j][k+1]+a[i-1][j-1][k-1]+a[i-1][j-1][k+1]+a[i-1][j+1][k-1]+a[i-1][j+1][k+1];
			}
		}
	}
	for(j=1;j<10;j++)
	{
		for(k=1;k<9;k++)
		{
			printf("%d ",a[days][j][k]);
		}
		printf("%d",a[days][j][k]);
		printf("\n");
	}
	return 0;
}
