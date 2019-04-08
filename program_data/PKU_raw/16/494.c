//??????
int main()
{
	char a[100001];
	cin >> a;
	int l = strlen(a), i = 0;
	for (i = l - 1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << endl;
	return 0;
}
