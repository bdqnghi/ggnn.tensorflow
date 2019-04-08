// ?????? ?? 1000062708
int main()
{
	int n, i, j, a[100000] = {0};
	cin >> n;
	do
	{
		cin >> i >> j;
		a[i]--;
		a[j]++;
	}while(i != 0 || j != 0);
	for(i = 0;i < n;i++)
		if(a[i] == n - 1)
		{
			cout << i << endl;
			break;
		}
	return 0;
}
