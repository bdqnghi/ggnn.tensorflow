int main()
{
	int num, d;
	int a[11][11];
	int b[11][11];
	int i, j;
	for(i=0;i<=10;i++)
	{
	for(j=0;j<=10;j++)
	{
		a[i][j]=0;
		b[i][j]=0;
	}
	}
	cin>>num>>d;
	a[5][5]=num;
	b[5][5]=num;
	while(d--)
	{
	for(i=0;i<=10;i++)
	for(j=0;j<=10;j++)
		a[i][j]=0;
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
			{
				if(b[i][j]!=0)
				{
					a[i][j]+=(2*b[i][j]);
					a[i-1][j]+=b[i][j];
					a[i+1][j]+=b[i][j];
					a[i-1][j-1]+=b[i][j];
					a[i+1][j-1]+=b[i][j];
					a[i-1][j+1]+=b[i][j];
					a[i+1][j+1]+=b[i][j];
					a[i][j-1]+=b[i][j];
					a[i][j+1]+=b[i][j];
	
				}
			
			
			}
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				b[i][j]=a[i][j];
			}		
		}
	
	}
	for(i=1;i<=9;i++)
	{
	for(j=1;j<=9;j++)
	{
		if(j!=1)
			cout<<" ";
		cout<<a[i][j];
	}
	cout<<endl;
	}
	return 0;
}