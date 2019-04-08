//???      1000062705    ?7???????
int main()
{
	int n, i, sum = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
		if (i % 7 == 0) continue;
		else if ( (i - 7) % 10 == 0||i / 10 == 7 ) continue;
		else sum = sum + i * i;
		cout << sum << endl;
    return 0;
}
