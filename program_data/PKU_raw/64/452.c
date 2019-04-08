/**
* @file 1.cpp
* @author ???
* @date 2011-12?07
* @description
* ??????:????
*/

int main()
{
	int n, d[101][3];
	int i, j, k, m1, m2;
	int (*p)[3];
	p = d;
	double l[10][10], max = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >>*(*(p + i)) >> *(*(p + i) + 1) >> *(*(p + i) + 2); // ??i??????
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			l[i][j] = sqrt((double)(*(*(p + i)) - *(*(p + j))) * (*(*(p + i)) - *(*(p + j))) +
				(*(*(p + i) + 1) - *(*(p + j) + 1)) * (*(*(p + i) + 1) - *(*(p + j) + 1)) + 
				(*(*(p + i) + 2) - *(*(p + j) + 2)) * (*(*(p + i) + 2) - *(*(p + j) + 2)));
		} // ????????
	}
	for (k = 0; k < n * (n - 1) / 2; k++)
	{
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (l[i][j] > max)
				{
					max = l[i][j];
					m1 = i;
					m2 = j; // ?????????
				}
			}
		}
		cout << '(' << *(*(p + m1)) << ',' << *(*(p + m1) + 1) << ',' << *(*(p + m1) + 2) << ")-(";
		cout << *(*(p + m2)) << ',' << *(*(p + m2) + 1) << ',' << *(*(p + m2) + 2) << ')' << '=' ;
		cout << fixed << setprecision(2) << l[m1][m2] << endl;
		l[m1][m2] = 0; // ??????????????????????
		max = 0;
	}
	return 0;
}