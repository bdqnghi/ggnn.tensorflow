void main()
{
	int a[8][8];
	int row(int x[8][8],int y,int i,int j,int m,int n);
	int m,n,i,j;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(row(a,a[i][j],i,j,m,n)==1)
			{
				printf("%d+%d\n",i,j);goto l1;
			}
		}
	}
	printf("No\n");
l1:;
}


int row(int x[8][8],int y,int i,int j,int m,int n)
{
	int p,max=x[i][0],min=x[0][j];
	for(p=0;p<n-1;p++)
	{
		if(x[i][p+1]>x[i][p])
		{
			max=x[i][p+1];
		}
	}
	if(y==max)
	{
		for(p=0;p<m-1;p++)
		{
			if(x[p+1][j]<x[p][j])min=x[p+1][j];
		}
		if(y==min)return 1;
		else return 0;
	}
	else return 0;
}

