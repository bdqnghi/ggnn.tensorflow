
const int maxn = 1200;

int
cmp(const void* e1, const void *e2)	{
	return *(int *)e1 - *(int *)e2;
}

int
main(void)	{
	int n;
	int a[maxn], b[maxn];
	
	while (cin >> n)	{
		if (n == 0)	break;

		for (int i = 0 ; i < n; i ++)	cin >> a[i];
		for (int i = 0; i < n; i ++)	cin >> b[i];

		qsort(a, n, sizeof(int), cmp);
		qsort(b, n, sizeof(int), cmp);

		int la, lb, ra, rb;

		la = lb = 0;
		ra = rb = n - 1;

		int ans = 0;

		for (int i = 0; i <n; i ++)	{
			if (a[ra] > b[rb])	{
				ans ++;
				ra --, rb --;
				continue;
			}
			if (a[la] > b[lb])	{
				ans ++;
				la ++, lb ++;
				continue;
			}
			if (a[la] < b[rb])	ans --;
			la ++, rb --;
		}

		cout << ans * 200 << endl;

	}

	return 0;
}