int k, i, j, an[30];
int DFS (int h, int n)
{
	int t1, t2;
	if (n == k - 1)
	{
		if (an[n] > h)
			return 0;
		else
			return 1;
	}
	if (an[n] > h)
		return DFS (h, n + 1);
	else
	{
		t1 = DFS (h, n + 1);
		t2 = DFS (an[n], n + 1) + 1;
		if (t1 > t2)
			return t1;
		else
			return t2;
	}
}
int main ()
{
	cin >> k;
	for (i = 0; i < k ;i ++)
	{
		cin >> an[i];
	}
	cout << DFS(INT_MAX, 0) << endl;
	return 0;
}