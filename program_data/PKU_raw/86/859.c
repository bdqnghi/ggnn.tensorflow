 //******************************//
 //*     ?????				*//
 //*     ???1000012711		*//
 //*     ???????			*//
 //*     ???2010.11.24		*//
 //******************************// 
int main()
{
	int i, j, n, m, sum, time, a[50] = {0};
	cin >> n;
	for (i = 1; i <= n; i ++)
	{
		sum = 0;
		time = 0;
		cin >> m;
		for (j = 1; j <= m; j ++)
		{
			cin >> a[j];
		}
		for (j = 1; j <= m; j ++)
		{
			if (a[j] - sum + time > 60)
				break;
			time += a[j] - a[j - 1] + 3;
			sum += a[j] - a[j - 1];
		}
		if (time <= 60)
			sum += 60 - time;
		cout << sum << endl;
		for (j = 0; j < 50; j ++)
		{
			a[j] = 0;
		}
	}
	return 0;
}