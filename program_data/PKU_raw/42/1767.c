/**
 * @file   2.cpp
 * @author ???
 * @date   2013-10-30
 * @description
 *         ?????????(11-4) ????????
 */



int main()
{
	int a[100000] = {0}, n, k, c = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cin >> k;

	for (; c < n; ++c)
	{
		if (a[c] != k)
		{
			cout << a[c];
			++c;
			break;
		}
	}

	for (; c < n; ++c)
	{
		if (a[c] != k) cout << " " << a[c];
	}

	return 0;
}