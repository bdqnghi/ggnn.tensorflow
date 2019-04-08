/*
 *@file 5.cpp
 *@author ???
 *@date 10.24
 *@description ????????
 */

int main ()
{
	int m, x, shuchu; //??????m?????????x,?????????????
	cin >> m; //????m
	for (x = 3; x <= m/2; x += 2)
	{
		shuchu = 1;
		for (int i = 2; i <= sqrt(x); i++)
		{
			if ((x % i) == 0)
			{
                shuchu = 0;
			    break;
			}
		}
		
		if (shuchu == 1)
			{
				for (int j = 2; j <= sqrt(m-x); j++)
				{
					if (((m-x) % j) == 0)
					{
						shuchu = 0;
						break;
					}
				}
				if (shuchu == 1)
				{
					cout << x << " " << m-x << endl;
				}
			}
	}
	return 0;
}