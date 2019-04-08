/*
 * 4.cpp
 *
 *  Created on: 2011-12-30
 *      Author: Administrator
 */
int main()
{
	int t, i, j, k, flag = 1;
	cin >> t;
	char a[100005];
	for( i = 1; i <= t; i++ )
	{
		cin >> a;
		for( j = 0; a[j]!= '\0'; j++ )
		{
			flag = 1;
			for( k = 0; a[k]!= '\0'; k++ )
			{
				if( j == k )
					continue;
				if( a[j] == a[k] )
				{
					flag = 0;
					break;
				}

			}
			if( flag )
			{
				cout << a[j] << endl;
				break;
			}
		}
		if( flag == 0 )
			cout << "no" << endl;
	}
	return 0;
}
