/*
 * 1.cpp
 *
 *  Created on: 2013-1-13
 *      Author: Administrator
 */
int main()
{
	int n, i, j, max = 0, maxi = 0;
	int a[1100] = {0}, b[30] = {0}, c[30][1100] = {0};
	char zz[1100][30];
	cin >> n;
	for(i = 1; i <= n; i++)
	{
		cin >> a[i] >> zz[i];
		for(j = 0; zz[i][j] != '\0'; j++)
		{
			b[(int)zz[i][j] - 'A']++;
			c[(int)zz[i][j] - 'A'][i] = 1;
		}
	}
	for(i = 0; i <= 25; i++)
	{
		if(b[i] > max)
		{
			max = b[i];
			maxi = i;
		}
	}
	cout << (char)(maxi + 'A') << endl;
	cout << max << endl;
	for(i = 1; i <= 1000; i++)
	{
		if(c[maxi][i] == 1)
			cout << a[i] << endl;
	}
	return 0;
}
