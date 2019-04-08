
int main ()
{
	int a[100002] = {0}, n, k, i, m, num = 0, d = 1;
	cin >> n;  //??????????
	for (i = 0; i <= n - 1; i++)
	{
		cin >> a[i];
	}
	cin >> k;  //??????
	i = 0;
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] == k)  //?????????
		{
			num++;
			for (m = i; m <= n; m++)
			{
				if (a[m + d] == k)
				{
					num++;
					continue;
				}
				a[m - num + 1] = a[m + 1];
			}
			break;
		}

	}
	for (i = 0; i <= n - 2 - num; i++)
		cout << a[i] << " " ;
	cout << a[n - 1 - num] << endl;
	return 0;
}