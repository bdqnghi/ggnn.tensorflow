inline void T(int N,int M,int row,int col,int array[][100])
{
	if (N>row||M>col)
	{
		return;
	}
	for (int j=M;j<=col;j++)
	{
		if (array[N][j]!= INT_MAX)
		{
			cout<<array[N][j]<<endl; 
			array[N][j] = INT_MAX;
		}
	}
	for (int i=N+1;i<=row;i++)
	{
		if (array[i][col]!=INT_MAX)
		{
			cout<<array[i][col]<<endl;
			array[i][col] = INT_MAX;
		}
	} 
	for(int j=col-1;j>=M;j--)
	{
		if (array[row][j]!=INT_MAX)
		{
			cout<<array[row][j]<<endl;
			array[row][j] = INT_MAX;
		}
	}
	for (int i=row-1;i>=N+1;i--)
	{
		if (array[i][M]!=INT_MAX)
		{
			cout<<array[i][M]<<endl;
			array[i][M] = INT_MAX;
		}
	}
	T(N+1,M+1,row-1,col-1,array);
}
int main()
{
	int array[100][100] = {0};
	int row , col;
	cin>>row>>col;
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			cin>>array[i][j];
		}
	}
	T(0,0,row-1,col-1,array);
	return 0;
}