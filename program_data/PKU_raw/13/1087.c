/*
 * 4.cpp
 *
 *  Created on: 2011-12-30
 *      Author: Administrator
 */
int main()
{
	int a[10005], n, i, j, flag = 1,flag2 = 0;
	cin >> n;
	for( i = 1; i <= n; i++ )
	{
		flag = 1;
		cin >> a[i];
		for( j = 1; j <= i - 1; j++ )
		{
			if( a[j] == a[i])
				flag = 0;
		}
		if( flag )
		{
			if( flag2 == 0 )
			{
				cout << a[i];
				flag2 = 1;
			}
			else
				cout << " " << a[i];
		}
	}
	return 0;
}
