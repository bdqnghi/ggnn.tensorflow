int main()
{
	int a[110][110];                                     //????AB????
	int b[110][110];
	int c[110][110];
	int x1, x2, y1, y2;
	cin >> x1 >> y1;                                     //??????

	for ( int q = 0; q < x1; q++ )
	{
		for ( int w = 0; w < y1; w++ )
			cin >> a[q][w];
	}

	cin >> x2 >> y2;

	for (int e = 0; e < x2; e++ )
	{
		for ( int r = 0; r < y2; r++ )
			cin >> b[e][r];
	}

	for ( int i = 0; i < x1; i++ )                                //????????????
	{
		for ( int j = 0; j < y2; j++ )
		{
			c[i][j] = 0;
			for ( int k = 0; k < x2; k++ )
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			if ( j < y2 - 1 )
				cout << c[i][j] << " ";                           //??????????????????
			else   
				cout << c[i][j] << endl;                          //?????????
		}
	}
	return 0;
}
