int main()
{
	int a[5][5], m, i, j, p = 0, k, q = 0;
	for( i = 0; i < 5; i++ )
		for( j = 0; j < 5;j++ )
			cin >> a[i][j];
		for( i = 0; i < 5; i++ )
		{
			m = 0;
			for( j = 0; j < 5;j++ )
			{
				if( a[i][j] > m )
				{
					m = a[i][j];
					p = j;                    // ???????
				}
			}
				for( k = 0;k < 5;k++)
					if( a[k][p] < a[i][p] )
						break;               // ???????????
					if( k == 5 ) 
					{
						cout << i+1 << " " << p+1 << " " << a[i][p] << endl;      // k=5???
						q = 1;                     // ??????1
					}
		}
		if(q == 0)
			cout << "not found" << endl;          // ???????not found
	return 0;
}