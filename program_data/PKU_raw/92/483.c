int T[1010], Q[1010];
int main()
{
	int n;
	while(cin >> n && n)
	{
		int ret = 0;
		for (int i = 0; i< n; i++)
			cin >> T[i];
		for (int i = 0; i< n; i++)
			cin >> Q[i];
		sort(T, T + n);
		sort(Q, Q + n);
		int T_begin = 0, Q_begin = 0;
		int T_end = n - 1, Q_end = n - 1;
		while (T_begin <= T_end && Q_begin <= Q_end)
		{
			if (T[T_end] > Q[Q_end])
			{
				T_end--;
				Q_end--;
				ret++;
			}
			else if (T[T_begin] > Q[Q_begin])
			{
				T_begin++;
				Q_begin++;
				ret++;
			}
			else
			{
				if (T[T_begin] < Q[Q_end])
					ret--;
				T_begin++;
				Q_end--;
			}

		}
		cout << ret * 200 << endl;	
	}
	return 0;
}