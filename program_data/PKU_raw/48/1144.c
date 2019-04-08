int a[9][9]={0},b[9][9]={0};
int s(int n)
{
	memset(b,0,sizeof(b));
	if(n==0)
	{
		for(int i=0;i<=8;i++)
		{
			for(int j=0;j<=8;j++)
			{
				cout<<a[i][j];
				if(j!=8)
				{
					cout<<" ";
                                       }
			}
			cout<<endl;
		}
	}
	else
	{
		for(int i=0;i<=8;i++)
		{
			for(int j=0;j<=8;j++)
			{
				if(a[i][j]!=0)
				{
					b[i][j]=b[i][j]+2*a[i][j];
					b[i][j+1]=b[i][j+1]+a[i][j];
					b[i][j-1]=b[i][j-1]+a[i][j];
					b[i+1][j+1]=b[i+1][j+1]+a[i][j];
					b[i+1][j]=b[i+1][j]+a[i][j];
					b[i+1][j-1]=b[i+1][j-1]+a[i][j];
					b[i-1][j+1]=b[i-1][j+1]+a[i][j];
					b[i-1][j]=b[i-1][j]+a[i][j];
					b[i-1][j-1]=b[i-1][j-1]+a[i][j];
				}
			}
		}
		for(int i=0;i<=8;i++)
		{
			for(int j=0;j<=8;j++)
			{
				a[i][j]=b[i][j];
			}
		}
		return s(n-1);
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	a[4][4]=m;
	s(n);
	return 0;
}