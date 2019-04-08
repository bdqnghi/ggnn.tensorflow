int main()
{
	int row = 0, col = 0;
	cin>>row>>col;
	int array[100][100] = {0};
	int i , j , n;
	for ( i = 0 ; i < row ; i++)
	{
		for ( j = 0 ; j < col ; j++)
		{
			cin >> array[i][j];
		}
	}
	for ( n = 0 ; n < row + col ; n ++)
	{
		for ( i = 0, j = n-1 ; i < n , j >=0 ; i++ , j--)
		{
			if(i<row && j <col)
			{
				cout<<array[i][j]<<endl;
			}
		}
	}
	return 0;
}