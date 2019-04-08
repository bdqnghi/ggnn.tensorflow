int main()
{
	int m,n;
	int a[9][9]={0},t[9][9];
	int i,j,k;
	scanf("%d %d",&m,&n);
	a[4][4]=1;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=8;j++)
			for(k=0;k<=8;k++)
				t[j][k]=a[j][k];
		for(j=5-i;j<=3+i;j++)
			for(k=5-i;k<=3+i;k++)
				a[j][k]=a[j][k]+t[j][k];
		for(j=5-i;j<=3+i;j++)
			for(k=5-i;k<=3+i;k++)
			{
				a[j-1][k-1]+=t[j][k];
				a[j-1][k]+=t[j][k];
				a[j-1][k+1]+=t[j][k];
				a[j][k-1]+=t[j][k];
				a[j][k+1]+=t[j][k];
				a[j+1][k-1]+=t[j][k];
				a[j+1][k]+=t[j][k];
				a[j+1][k+1]+=t[j][k];
			}
	}
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
			if(j==0)
				printf("%d",m*a[i][j]);
			else
				printf(" %d",m*a[i][j]);
		}
		printf("\n");
	}
	return 0;
}