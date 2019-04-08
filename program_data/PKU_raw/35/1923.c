
int a[100][100];
int xx[10],yy[10];

int hang(int no,int n) 
{
	int ans=0;
	int max=a[no][0];
	for (int i=1;i<n ;i++ )
	{
		if (a[no][i]>max)
		{
			max=a[no][i];
			ans=i;
		}
	}
	return ans;
}

int lie(int no,int n)
{
	int ans=0;
	int max=a[0][no];
	for (int i=1;i<n ;i++ )
	{
		if (a[i][no]<max)
		{
			max=a[i][no];
			ans=i;
		}
	}
	return ans;
}

int main()
{
	int m,n;
	scanf("%d,%d",&n,&m);
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (int i=0; i<n; i++)
	{
		xx[i]=hang(i,m);
	}
	for (int i=0; i<m; i++)
	{
		yy[i]=lie(i,n);
	}
	for (int i=0; i<n; i++)
	{
		if (yy[(xx[i])]==i)
		{
			printf("%d+%d\n",i,xx[i]);
			return 0;
		}
	}
	printf("No\n");
	return 0;
}
