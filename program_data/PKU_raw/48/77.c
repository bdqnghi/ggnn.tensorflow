
void germ(int a[9][9],int b[9][9],int n)
{
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j>=1)
				b[i][j-1]+=a[i][j];
			if(i>=1&&j>=1)
				b[i-1][j-1]+=a[i][j];
			if(i>=1)
				b[i-1][j]+=a[i][j];
			if(i<=7&&j>=1)
				b[i+1][j-1]+=a[i][j];
			if(i<=7&&j<=7)
				b[i+1][j+1]+=a[i][j];
			if(i>=1&&j<=7)
				b[i-1][j+1]+=a[i][j];
			if(j<=7)
				b[i][j+1]+=a[i][j];
			if(i<=7)
				b[i+1][j]+=a[i][j];
			b[i][j]+=a[i][j];
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=b[i][j];
		}
	}
	n-=1;
	if(n>0)
	{
		germ(a,b,n);
	}
	else if(n==0)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<8;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("%d\n",b[i][j]);
		}
	}
}

main()
{
	int n,m,a[9][9]={0},b[9][9]={0};
	scanf("%d%d",&m,&n);
	a[4][4]=m;
	b[4][4]=m;
	germ(a,b,n);
}