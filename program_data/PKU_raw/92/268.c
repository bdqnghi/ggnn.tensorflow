/*
	program: ????
	Author : ??
	ID     : 00948159
	Date   : 2011.3.29
*/


const int MAXN = 1000;
const int PRICE = 200;

int h[2][MAXN];

int main()
{
	int n, i, j, ans, s0, t0, s1, t1;

	while (scanf("%d", &n), n > 0)
	{
		for (i = 0; i < 2; ++i)
		{
			for (j = 0; j < n; ++j)
				scanf("%d", &h[i][j]);
			sort(h[i], h[i] + n);
		}

		ans = 0;
		s0 = 0;
		s1 = 0;
		t0 = n - 1;
		t1 = n - 1;
		while (s0 <= t0)
		{
			while (s0 <= t0 && h[0][s0] > h[1][s1])
			{
				ans += PRICE;
				++s0;
				++s1;
			}
			while (s0 <= t0 && h[0][t0] > h[1][t1])
			{
				ans += PRICE;
				--t0;
				--t1;
			}
			if (s0 <= t0)
			{
				if (h[0][s0] == h[1][t1])
					break;
				ans -= PRICE;
				++s0;
				--t1;
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}
