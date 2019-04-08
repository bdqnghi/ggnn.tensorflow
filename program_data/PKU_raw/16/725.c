int main()
{
	int n, a=0, i=5, m=0, b;
	cin >> n;
	do
	{
		cout << n%10;
		n=n/10;
	}while(n!=0);
	return 0;
}
