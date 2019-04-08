
int cmp1(const void * p1, const void * p2)
{
	int * p3 = (int *)p1;
	int * p4 = (int *)p2;
	return *p3 - *p4;
}

int cmp2(const void * p1, const void * p2)
{
	int * p3 = (int *)p1;
	int * p4 = (int *)p2;
	return *p4 - *p3;
}

int q[1001], t[1001];

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		for (int i = 0; i < n; i ++)
			cin >> t[i];
		for (int i = 0; i < n; i ++)
			cin >> q[i];

		qsort(t, n, sizeof(int), cmp1);
		qsort(q, n, sizeof(int), cmp2);


		//for (int i = 0; i < n; i ++)
		//	cout << t[i] << ' ' << q[i] << endl;

		int result = 0;

		int tl, tr, ql, qr;
		tl = ql = 0;
		tr = qr = n - 1;

		while (ql <= qr && tl <= tr)
		{
			//cout << ql << ' ' << qr << endl;
			//cout << tl << ' ' << tr << endl;
			if (q[ql] < t[tr])
			{
				result += 200;
				ql ++;
				tr --;
				continue;
			}
			else
			{
				if (t[tl] > q[qr])
				{
					result += 200;
					tl ++;
					qr --;
				}
				else
				{
					if (t[tl] < q[ql])
					{
						result -= 200;
						tl ++;
						ql ++;
					}
					else
					{
						tl ++;
						ql ++;
					}
				}
			}
		}
		cout << result << endl;
	}

	return 0;
}