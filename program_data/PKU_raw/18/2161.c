void hang(int a[100][100],int n)
{
	int i,j;
	for(i=2;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[j][i]=a[j][i+1];
		}
	}
}
void lie (int a[100][100],int n)
{
	int i,j;
	for(i=2;i<=n-1;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=a[i+1][j];
		}
	}
}
void xiaohang(int a[100][100],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int min=100000000;
		for(j=1;j<=n;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
		for(j=1;j<=n;j++)
		{
			a[i][j]-=min;
		}
	}
}
void xiaolie(int a[100][100],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int min=100000000;
		for(j=1;j<=n;j++)
		{
			if(min>a[j][i])
			{
				min=a[j][i];
			}
		}
		for(j=1;j<=n;j++)
		{
			a[j][i]-=min;
		}
	}
}
int main()
{ 
	int n;
	cin>>n;
	int a[100][100]={{0}};
	int i,j;
	int p;
	for(p=1;p<=n;p++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		int o,sum=0,m=n;
		for(o=1;o<=n-1;o++)
		{
			xiaohang(a,m);
			xiaolie(a,m);
			sum+=a[2][2];
			hang(a,m);
			lie(a,m);
			m--;
		}
		cout<<sum<<endl;
	}
	return 0;
}
