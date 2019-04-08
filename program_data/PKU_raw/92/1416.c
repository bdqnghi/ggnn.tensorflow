int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
int main()
{
	int n, i, j, tian[1010], qi[1010];
	while(cin >> n)
	{
		if (n == 0)
			break;
		for (i = 0; i < n; i++)
			cin >> tian[i];
		for (i = 0; i < n; i++)
			cin >> qi[i];
		qsort(tian, n, sizeof(int), cmp);
		qsort(qi, n, sizeof(int), cmp);
		int tmax = n - 1;
		int tmin = 0;
		int qmax = n - 1;
		int qmin = 0;
		int count = 0;
		int money = 0;
		while (count != n)
		{
			if (tian[tmax] > qi[qmax])
			{
				tmax--;
				qmax--;
				count++;
				money += 200;
			}
			else if (tian[tmin] > qi[qmin])
			{
				tmin++;
				qmin++;
				count++;
				money += 200;
			}
			else
			{
				if (tian[tmin] < qi[qmax])
					money -= 200;
				tmin++;
				qmax--;
				count++;
			}
		}
		cout << money << endl;
	}
}