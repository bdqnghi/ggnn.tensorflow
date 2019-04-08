/**
 * 1.cpp
 * ?? ??
 * ?? 2011 12 12
 * ?????? ??
 **/
int main()
{
	int n, i, j, a[100000] = {0};
	int *p = a;
	cin >> n;
	
	while (cin >> i && cin >> j && (i != 0 || j != 0))
	{
		(*(p + j))++;
	}
	
	for (i = 0; i < n; i++)
	{
		if (*(p + i) == n - 1)
		{
			cout << i;
			break; 
		}
	}
	if (i == n)
	{
		cout << "NOT FOUND";
	}
	return 0;
}
