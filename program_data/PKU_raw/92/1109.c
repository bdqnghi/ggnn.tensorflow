


int main()
{
	int i;
	int tj[NUM], qw[NUM], n;

	while (cin >> n && n)
	{
		for (i = 0; i < n; i++)
			cin >> tj[i];
		for (i = 0; i < n; i++)
			cin >> qw[i];
		sort(tj, tj + n);
		sort(qw, qw + n);

		int sum = 0, tjl = 0, tjr = n - 1, qwl = 0, qwr = n - 1;
		while (tjl <= tjr)
		{
			while (tjl <= tjr && tj[tjl] > qw[qwl])
			{
				sum += 200;
				tjl++;
				qwl++;
			}
			while (tjl <= tjr && tj[tjr] > qw[qwr])
			{
				sum += 200;
				tjr--;
				qwr--;
			}

			if (tjl <= tjr)
			{
				if (tj[tjl] < qw[qwr])
					sum -= 200;
				tjl++;
				qwr--;
			}
		}

		cout << sum << endl;
	}	

	return 0;
}
