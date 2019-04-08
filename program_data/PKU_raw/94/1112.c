/*
 * 1111.cpp
 *
 *  Created on: 2012-11-9
 *      Author: 12272
 */
int main()
{
	int N, i, j, temp, m = 0;
	int a[501], b[501];
	cin >> N;
	for(i = 0; i < N; i++)
		cin >> a[i];
	for(i = 0; i < N; i++)
		if(a[i] % 2 != 0)
		{
			b[m] = a[i];
			m++;
		}
	for(i = 0; i < m-1; i++)
		for(j = 0; j < m-1-i; j++)
			if(b[j] > b[j+1])
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
	for(i = 0; i < m; i++)
	{
		if(i == 0)
			cout << b[i];
		else
			cout << "," << b[i];
	}
	return 0;
}
