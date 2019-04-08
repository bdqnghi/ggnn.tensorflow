/*
 * homework3.cpp
 *
 *  Created on: 2012-12-4
 *      Author: Lixurong
 */


int main()
{
	int k;
	cin >> k;
	for( int i=0; i<k; i++ )
	{
		int m, n;
		cin >> m >> n;
		int a[m][n];
		for( int i=0; i<m; i++ )
		{
			for( int j=0; j<n; j++ )
			{
				cin >> a[i][j];
			}
		}
		int s=0;
		for( int i=0; i<n; i++ )
		{
			s+=*(*(a)+i);
		}
		if(m>1)
		for( int i=0; i<n; i++ )
				{
					s+=*(*(a+m-1)+i);
				}
		for( int i=1; i<m-1; i++ )
		{
			s+=*(*(a+i)+0);
		}
		for( int i=1; i<m-1; i++ )
				{
					s+=*(*(a+i)+n-1);
				}
		cout << s;
		if( i!=k-1 )
			cout << endl;
	}
	return 0;
}
