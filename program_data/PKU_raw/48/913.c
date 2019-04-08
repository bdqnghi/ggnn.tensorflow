int main()
{
	int n,m,a[9][9]={0},temp[9][9]={0};
	cin>>n>>m;
	a[4][4]=n;
	while(m)
	{
		m--;
		for(int i=1;i<8;i++)
		{
			for(int j=1;j<8;j++)
			{
				if(a[i][j]!=0)
				{
					for(int p=i-1;p<=i+1;p++)
					{
						for(int q=j-1;q<=j+1;q++)
						{
							temp[p][q]+=a[i][j];
						}
					}
					temp[i][j]+=a[i][j];
				}
			}
		}
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				a[i][j]=temp[i][j];
				temp[i][j]=0;
			}
		}
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(j==8)
				cout<<a[i][j];
			else
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}