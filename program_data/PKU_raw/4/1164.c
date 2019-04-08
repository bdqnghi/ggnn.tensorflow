int main()
{
	int a[101][101] = {0};
	int row, col, i, j, n, sum;
	cin >> row >> col;
	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
			cin >> a[i][j];
    for(n = 0; n < row + col - 1; n++)
	    for(i = 0; i <= n;i++)
		{   
		    if(i < row&&n- i < col)
				cout << a[i][n - i] << endl;
			else continue;
		}
    return 0;
}