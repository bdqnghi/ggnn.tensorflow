int main()
{
	int a[5][5],b[5][5],v,flag=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<4;k++)
		{
			for(int j=0;j<4-k;j++)
			{
				if(a[i][j]<=a[i][j+1])
				{
					v=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=v;
				}
			}
		}
	}
	for(int j=0;j<5;j++)
	{
		for(int k=0;k<4;k++)
		{
			for(int i=0;i<4-k;i++)
			{
				if(b[i][j]>=b[i+1][j])
				{
					v=b[i][j];
					b[i][j]=b[i+1][j];
					b[i+1][j]=v;
				}
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i][0]==b[0][j])
			{
				cout<<i+1<<' '<<j+1<<' '<<a[i][0];
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		cout<<"not found";
	}
	return 0;
}
