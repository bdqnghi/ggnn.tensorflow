int a[100][100];
char r[100][100];
void check(int x,int y,int z)
{
	if(a[x][y]==-1&&r[x][y]!='#')
	{
		a[x][y]=z;
		r[x][y]='@';	
	}
	return;
}
int main()
{
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<100;j++)
		{
			a[i][j]=-1;	
		}	
	}
	int n;
	int d;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>r[i][j];
			if(r[i][j]=='@')
			{
				a[i][j]=1;	
			}	
		}	
	}
	cin>>d;
	for(int k=0;k<d;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]<=k&&a[i][j]>=0)
				{
					check(i-1,j,k+1);
					check(i+1,j,k+1);
					check(i,j+1,k+1);
					check(i,j-1,k+1);	
				}	
			}	
		}		
	}
	int num=0;
		for(int i=1;i<=n;i++)
		{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]>=0)
			{
				num++;	
			}	
		}	
	}
	cout<<num;
	return 0;
}
