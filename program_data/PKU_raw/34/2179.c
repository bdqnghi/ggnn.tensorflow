void check(int);
int main()
{
	int n;
	cin >> n;
	check(n);
	return 0;
}
void check(int n)
{
	
	if (n == 1)
	{
		cout << "End";
	}
	else if (n % 2 == 0)
	{	
		cout << n << "/2=";
		n = n / 2;
		cout << n << endl;
		check(n);
	}
	else if ((n % 2 ==1) && (n != 1))
	{
		cout << n <<"*3+1=";
		n = n * 3 + 1;
		cout << n << endl;
		check(n);
	}
}