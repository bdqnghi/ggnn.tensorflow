
int main(void)
{
	int n;
	cin >> n;
	if(n == 0) cout << 0;
	for(int i = 1; n != 0; i++)
	{
		cout << n % 10;
		n /= 10;
	}
	cout << endl;
	return 0;
} 