// ?????
// ??? 1100012820
// 20111115
//******************
int place(int m, int n)
{
	if (m < 0) return 0;
	if (n == 1) return 1;
	return place(m, n - 1) + place(m - n, n);
}
int main()
{
	int i, n;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		int k = 0;
		int M, N;
		cin >> M >> N;
		cout << place (M, N) << endl;
	}
	return 0;
}