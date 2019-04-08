/********************************************
 *@file   5.cpp                             *
 *@author ??                              *
 *@date   2013-11-1                         *
 *@description                              *
 *??????6??????                 *
 ********************************************
 */
int main()
{
	int x[1010], y[1010], flag[1010] = {0}, n, k, m, p, i = 1, j = 1, max = 0;
	char ch;
	cin >> x[0];
	ch = cin.get();
	while (ch == ',')
	{
		cin >> x[i];
		i++;
		ch = cin.get();
	}
	

	cin >> y[0];
	ch = cin.get();
	while (ch == ',')
	{
		cin >> y[j];
		j++;
		ch = cin.get();
	}
	n = i;
	for (k = 0; k < n; k++)
	{
		for (m = x[k]; m < y[k]; m++)
		{
			flag[m]++;
		}
	}
	for (p = 0; p < 1000; p++)
	{
		if (flag[p] > max)
			max = flag[p];
	}
	cout << n << " " << max;
	return 0;
}