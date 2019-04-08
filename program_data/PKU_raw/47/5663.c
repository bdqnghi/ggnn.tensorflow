
int data[1000] = {0};
int n = 0, m = 0;

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> data[i];
	for(int i = 1; i <= n / 2; i++)
	{
		int j = data[i];
		data[i] = data[n - i + 1];
		data[n - i + 1] = j;
	}
	cout << data[1];
	for(int i = 2; i <= n; i++) cout << ' ' << data[i];
}	