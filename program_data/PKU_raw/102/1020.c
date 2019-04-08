
double ma[100] = {0.00}, fe[100] = {0.00};

void quick_sort1(double a[], int l, int r)
{
	if (l >= r)
		return;
	int lo = l, hi = r;
	double k = a[l];
	while (lo != hi)
	{
		while ((lo < hi) && (a[hi] >= k))
			hi--;
		a[lo] = a[hi];
		while ((lo < hi) && (a[lo] <= k))
			lo++;
		a[hi] = a[lo];
	}
	a[lo] = k;
	quick_sort1(a, l, lo - 1);
	quick_sort1(a, lo + 1, r);
}

void quick_sort2(double a[], int l, int r)
{
	if (l >= r)
		return;
	int lo = l, hi = r;
	double k = a[l];
	while (lo != hi)
	{
		while ((lo < hi) && (a[hi] <= k))
			hi--;
		a[lo] = a[hi];
		while ((lo < hi) && (a[lo] >= k))
			lo++;
		a[hi] = a[lo];
	}
	a[lo] = k;
	quick_sort2(a, l, lo - 1);
	quick_sort2(a, lo + 1, r);
}


int main()
{
	int n, i, man = 0, feman = 0;
	char a[10];
	cin >> n;
	cin.get();
	for (i = 1; i <= n; i++)
	{
		cin >> a; 
		if (a[0] == 'm')
		{
			cin >> ma[man];
			man++;
		}
		if (a[0] == 'f')
		{
			cin >> fe[feman];
			feman++;
		}
		cin.get();
	}
	man--;
	feman--;
	quick_sort1(ma, 0, man);
	quick_sort2(fe, 0, feman);
	cout << fixed;
	for (i = 0; i <= man; i++)
		cout << setprecision(2) << ma[i] << " ";
	for (i = 0; i<= feman - 1; i++)
		cout << setprecision(2) << fe[i] << " ";
	cout << fe[feman] << endl;
	return 0;
}
