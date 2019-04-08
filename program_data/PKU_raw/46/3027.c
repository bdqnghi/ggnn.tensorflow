int main()
{
	int row, col, h, l, left, up;                         //????a
	int a[110][110];
	cin >> row >> col;                                    //?????

	for ( int i = 0; i < row; i++ )                       //????????   
	{
		for ( int j = 0; j < col; j++ )
			cin >> a[i][j];
	}

	l = 0;                                                //???
	h = 0;
	left = 0;
	up = 0;
	while ( left < col && up < row )                      //???????????????????
	{
    	for ( l = left; l < col - 1; l++ )                //???????????
		{
	    	cout << a[h][l] << endl;
		}
	    for ( h = up; h < row - 1; h++ )
		{
		    cout << a[h][l] << endl;
		}
		if ( ( up + 1 ) >= row )                          //???????????
		{
			cout << a[h][col - 1];
			break;
		}
		if ( ( left + 1 ) >= col )
		{
			cout << a[row - 1][l];
			break;
		}
    	for ( ; l > left; l-- )
		{
	    	cout << a[h][l] << endl;
		}
	    for ( ; h > up; h-- )
		{
	    	cout << a[h][l] << endl;
		}
		left++;                                           //????????
		up++;
		col--;
		row--;
		h = up;
	}
	return 0;
}


	
	