//********************************
//*??????                 **
//*??????  1000012939     **
//*???2012.11.02             **
//********************************
int main()
{
	int a[16];
	while (cin >> a[0] && a[0] != -1)
	{
		int n = 0, count = 0;
		while (a[n] != 0)
			cin >> a[++n];
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)
				if (a[i] == 2 * a[j] || a[j] == 2 * a[i])
					count++;
		}
		cout << count << endl;
	}
	return 0;
}