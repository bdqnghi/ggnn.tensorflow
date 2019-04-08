
int n;
int t[1000];
int q[1000];

int cmp(const void * e1, const void * e2)
{
	return *(int *)e2 - *(int *)e1;
}

int main()
{
	int i;
	int st, sq, et, eq;
	int count;
	while (cin >> n)
	{
		if (n == 0)
			break;
		for (i = 0; i < n; i ++)
			cin >> t[i];
		for (i = 0; i < n; i ++)
			cin >> q[i];

		qsort(t, n, sizeof(int), cmp);
		qsort(q, n, sizeof(int), cmp);

		st = sq = 0;
		et = eq = n - 1;
		count = 0;
		while (st <= et)
		{
			if (t[et] > q[eq])
			{
				count ++;
				et --;
				eq --;
			}
			else if (t[et] < q[eq])
			{
				count --;
				et --;
				sq ++;
			}
			else
			{
				if (t[st] > q[sq])
				{
					count ++;
					st ++;
					sq ++;
				}
				else 
				{
					if (t[et] < q[sq])
						count --;
					et --;
					sq ++;
				}
			}
		}
		cout << 200 * count << endl;
	}
	return 0;
}