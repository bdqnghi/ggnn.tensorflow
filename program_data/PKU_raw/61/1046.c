/*
 * 1.cpp
 *
 *  Created on: 2013-10-11
 *      Author: ??
 */

int main()
{
	int n;
	cin >> n;
	int a, sj, hc, q1;
	for (int i=1;i<=n;i++)
	{
		q1 = 1;
		sj = 1;
		cin >> a;
		for (int j=3;j<=a;j++)
		{
			hc = sj;
			sj = sj+q1;
			q1 = hc;
		}
		cout << sj << endl;
	}
	return 0;
}
