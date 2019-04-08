/**
 * @file   5.cpp
 * @author ???
 * @date   2013-11-15
 * @description
 *         ?????????(11-12) ??2?N??
 */



int main()
{
	int N, k, i, j = 0, a[100] = {1}, b[100];          // i, j, k?????????
	cin >> N;

	for (k = 1; k <= N; ++k)
		for (i = 0; i <= j; ++i)              // ??????
		{
			if (!i) b[0] = a[0];
			b[i + 1] = a[i + 1];
			a[i] += b[i];
			if (a[i] >= 10)
			{
				a[i] -= 10;
				++a[i + 1];
				if (a[i + 1] == 1 && i == j)
				{
					++j;
					break;
				}
			}
		}

	i = 99;
	while (a[--i] == 0);
	for (; i >= 0; --i)
		cout << a[i];

	return 0;
}