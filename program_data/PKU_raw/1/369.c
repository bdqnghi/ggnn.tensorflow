int s(int, int);
int main()
{
	int n, i, a;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		cin >> a;
		cout << s(a, 2)  << endl;                  // ??????b????2
	}
	return 0;
}
int s(int a, int b)
{
	int i, t = 0;
	for(i = b;i < a;i++)
		if(a % i == 0 && a / i >= i)              // ????????????????
			t = t + s(a / i, i);                   // ????????????
	return t + 1;
}