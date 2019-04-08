int main()
{
	int a[7][7];                                             //????
	int cnt = 0;                                                 //??????????????
	
	for ( int k = 0; k < 5; k++ )                            //??
	{
		for ( int l = 0; l < 5; l++ )
			cin >> a[k][l];
	}

	for ( int i = 0; i < 5; i++ )
	{
		for ( int j = 0; j < 5; j++ )                        //?????????
		{
			if ( a[i][j] >= a[i][0] && a[i][j] >= a[i][1] && a[i][j] >= a[i][2] &&
				a[i][j] >= a[i][3] && a[i][j] >= a[i][4] && a[i][j] <= a[0][j] && 
				a[i][j] <= a[1][j] && a[i][j] <= a[2][j] && a[i][j] <= a[3][j] && a[i][j] <= a[4][j] )
			{
				cout << i + 1 << " " << j + 1 << " " << a[i][j] << endl;
				cnt++;                                       //??????????
			}
		}
	}

	if ( cnt == 0 )                                          //??????0?????????not found
		cout << "not found";
	return 0;
}
