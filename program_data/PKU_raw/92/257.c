

int tianji[1001], qiwang[1001], n;

int cmp(const void *e1, const void *e2)
{
	return (*(int*)e2 - *(int*)e1);
}

int solve()
{
	int score = 0;
	int p1 = 0;
	int p2 = 0;
	int e1 = n-1;
	int e2 = n-1;
	while(p2 <= e2)
	{
		if (tianji[p1] > qiwang[p2])
		{
			score += 200;
			p1++;
			p2++;
			continue;
		}
		if (tianji[e1] > qiwang[e2])
		{
			score += 200;
			e1--;
			e2--;
			continue;
		}
		if (tianji[e1] < qiwang[p2])
		{
			score -= 200;
			e1--;
			p2++;
			continue;
		}
		if (tianji[e1] == qiwang[p2])
		{
			e1--;
			p2++;
		}
		else
		{
			cout << "err!" << endl;
			break;
		}
	}	
	return score;
}

int main()
{
	while(cin >> n)
	{
		if (n == 0)
			break;
		for (int i = 0; i < n; i ++)
			cin >> tianji[i];
		qsort(tianji, n, sizeof(int), cmp);
		for (int i = 0; i < n; i ++)
			cin >> qiwang[i];
		qsort(qiwang, n, sizeof(int), cmp);
		cout << solve() << endl;		
	}	
	return 0;
}