


int tianji[1000];
int qiwang[1000];

int cmp(const void *a, const void *b)
{
	return -(*(int *)a - *(int *)b);
}
int main()
{
	int n;
	while(cin >> n)	
	{
		if (n == 0)
			break;
		int money = 0;
		for (int i = 0; i < n; i++)
			cin >> tianji[i];
		for (int i = 0; i < n; i++)
			cin >> qiwang[i];
		qsort(tianji, n, sizeof(int), cmp);
		qsort(qiwang, n, sizeof(int), cmp);

		int tp = 0, tq = n-1, qp = 0, qq = n-1;

		while (tp <= tq)
		{
			while (tianji[tp] > qiwang[qp] && tp <= tq)
			{
				money += 200;
				tp++;
				qp++;
			}
			while(tianji[tq] > qiwang[qq] && tp <= tq)
			{
				money += 200;
				tq--;
				qq--;
			}
			if (tianji[tp] <= qiwang[qp] && tp <= tq)
			{
				if (tianji[tq] < qiwang[qp])
					money -= 200;
				tq--;
				qp++;
			}
		}
		cout << money << endl;

	}
}