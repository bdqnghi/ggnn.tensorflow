
int main()
{
	int n, a[20010];
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		for(int j = 0; j < i; j++)
			if(a[i] == a[j])
			{
				i--;
				n--;
			}
	}
	for(int k = 0; k < n-1; k++)
		cout << a[k] << " ";
	cout << a [n-1] << endl;

	return 0;
}
