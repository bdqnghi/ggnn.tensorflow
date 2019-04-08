int a[11][11];
int backup_a[11][11];
int b[11][11];
void backup1()
{
	for(int i=1;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			backup_a[i][j]=a[i][j];
			b[i][j]=a[i][j];
		}
	}

}
void cal1()
{
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			if(i>0&&i<10&&j<10&&j>0)
			{
				a[i][j]=b[i-1][j-1]+b[i-1][j+1]+b[i+1][j-1]+b[i+1][j+1]+b[i-1][j]+b[i+1][j]+b[i][j-1]+b[i][j+1]+2*b[i][j];
			}
		}
	}
}

int main()
{
	int n=0;
	int d;
	cin>>d;
	cin>>n;
	
	memset(a,0,sizeof(a));
	a[5][5]=d;
	backup1();
	
	for(int i=0;i<n;i++)
	{
		cal1();
		backup1();
	}
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<10;j++)
		{
			if(i>0&&i<10&&j<10&&j>0)
			{	
			if(j!=9)	cout<<a[i][j]<<" ";
			else if(j==9)cout<<a[i][j]<<endl;
			}
		}
	}

	return 0;

}