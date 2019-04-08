
int a[9999][9999] = {0}, b[9999] = {0}, recognize[9999] = {0};
int (*p)[9999], *r, *s;

int main()
{
	int n, t, k, i, j, flag = 0;
	p = a;
	r = b;
	s = recognize;
	cin >> n;
	while(1)
	{
		cin >> t >> k;
		if (t == 0 && k == 0)
			break;
		*(*(p + t) + k) = 1;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (*(*(p + i) + j) == 1)
			{
				(*(r + j))++;
				(*(s + i))++;
			}
		}
	for (i = 0; i < n; i++)
	{
		if ((*(r + i) == n - 1) && (*(s + i) == 0))
		{
			cout << i;
			flag = 1;
		}
	}
	if (flag == 0)
		cout << "NOT FOUND";
	return 0;
}