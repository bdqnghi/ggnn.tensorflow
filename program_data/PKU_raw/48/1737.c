int a[9][9]={0},b[9][9];
void fanzhi(int i,int j)
{
    int x,y;
	for(x=i-1;x<=i+1;x++)
	{
		for(y=j-1;y<=j+1;y++)
		{
			b[x][y]=b[x][y]+a[i][j];
		}
	}
	b[i][j]=b[i][j]+a[i][j];
}
main()
{
	int m,n,k,i,j;
	scanf("%d %d",&m,&n);
	a[4][4]=m;
	for(k=1;k<=n;k++)  //???k????? 
	{
		memset(b,0,sizeof(b));
		for(i=4-k+1;i<=4+k-1;i++)
		{
			for(j=4-k+1;j<=4+k-1;j++)
			{
				fanzhi(i,j);
			}
		}
		for(i=4-k;i<=4+k;i++)
		{
			for(j=4-k;j<=4+k;j++)
			{
				a[i][j]=b[i][j];
			}
		}
	}
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=7;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("%d\n",a[i][8]);
	}
}