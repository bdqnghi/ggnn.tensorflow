/*
 * poj03.cpp
 *
 *  Created on: 2011-9-23
 *      Author: G199
 */


int main()
{
	int n, i, j, m, f;
	double male[50], female[50], h, temp;
	char sex[20];
	cin >> n;
	m = f = 0;
	while(n--)
	{
		cin >> sex >> h;
		if(sex[0] == 'm')
		{
			male[m++] = h;
		}
		else
		{
			female[f++] = h;
		}
	}
	for(i = 0; i < m; i++)
	{
		for(j = m-1; j > i; j--)
		{
			if(male[j-1] > male[j])
			{
				temp = male[j-1];
				male[j-1] = male[j];
				male[j] = temp;
			}
		}
	}
	for(i = 0; i < f; i++)
	{
		for(j = f-1; j > i; j--)
		{
			if(female[j-1] < female[j])
			{
				temp = female[j-1];
				female[j-1] = female[j];
				female[j] = temp;
			}
		}
	}
	for(i = 0; i < m; i++)
	{
		cout << fixed << setprecision(2) << male[i] << ' ';
	}
	for(i = 0; i < f-1; i++)
	{
		cout << fixed << setprecision(2) << female[i] << ' ';
	}
	cout << female[f-1] << endl;
	return 0;
}
