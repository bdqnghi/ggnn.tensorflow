//
// ????1.cpp
// ???????????
// ?????? 1200012943
// ??:2012.10.26
//
int main()
{
	int m, n, a, b, r, i;
	cin >> m;
	n = m / 2;
	for (a = 3; a <= n; a = a + 2)
	{
		r = ceil (sqrt (a));  //?a????
        for (i = 2; i <= r; i++)
			if ((a % i) == 0) break;  //??????
			if (i == r + 1)
			{
				b = m - a;
				r = ceil (sqrt (b));  //?b????
                for (i = 2; i <= r; i++)
					if ((b % i) == 0) break;  //??????
					if (i == r + 1)
						cout << a << ' ' << b << endl;
			}
	}
	return 0;
}