void f(int n)
{
	if (n % 2)
	{
		cout << n << '*' << 3 << '+' << 1 << '=' << n * 3 + 1 << endl;
		n = n * 3 + 1;
	}
	else 
	{
		cout << n << '/' << 2 << '=' << n/2 << endl;
		n = n / 2;
	}
	if (n == 1)
		cout << "End";
	else 
		f(n);
}
int main ()
{
	int n;
	cin >> n;
	if (n == 1)
		cout << "End";
	else
		f(n);
}