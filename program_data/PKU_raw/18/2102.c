int minrow(int a[100][100],int i,int m)
{
	int b=a[i][0],j;
	for(j=0;j<m;j++)
	{
		if(a[i][j]<b)
			b=a[i][j];
	}
	return b;
}
int mincolumn(int a[100][100],int j,int m)
{
	int b=a[0][j],i;
	for(i=0;i<m;i++)
	{
		if(a[i][j]<b)
			b=a[i][j];
	}
	return b;
}
void row(int a[100][100],int m)
{
	int i,j,b;
	for(i=0;i<m;i++)
	{
		b=minrow(a,i,m);
		for(j=0;j<m;j++)
		{
			a[i][j]=a[i][j]-b;
		}
	}
}
void column(int a[100][100],int m)
{
	int i,j,b;
	for(j=0;j<m;j++)
	{
		b=mincolumn(a,j,m);
		for(i=0;i<m;i++)
		{
			a[i][j]=a[i][j]-b;
		}
	}
}
void del(int a[100][100],int m)
{
	int i,j;
	for(i=1;i<m;i++)
		for(j=0;j<m;j++)
			a[i][j]=a[i+1][j];
	for(i=0;i<m;i++)
		for(j=1;j<m;j++)
			a[i][j]=a[i][j+1];
}
void print(int a[100][100],int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n,i,j,k,a[100][100]={0},m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int b=0;
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
			{
				scanf("%d",&a[j][k]);
			}
		m=n;
		for(j=0;j<n-1;j++)
		{
			row(a,m);
			column(a,m);
			b=b+a[1][1];
			del(a,m);
			m--;
		}
		printf("%d\n",b);
	}
	return 0;
}