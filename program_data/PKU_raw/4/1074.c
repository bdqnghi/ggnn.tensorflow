int main()
{
	int row,col;
	cin>>row>>col;
	int a[100][100];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<col;i++)
	{
		int r=0;
		int c=i;
		while(r<=row-1&&c>=0)
		{
			cout<<a[r][c]<<endl;
			r=r+1;
			c=c-1;
		}
	}
	for(int i=1;i<row;i++)
	{
		int r=i;
		int c=col-1;
		while(r<=row-1&&c>=0)
		{
			cout<<a[r][c]<<endl;
			r=r+1;
			c=c-1;
		}
	}

	return 0;
}