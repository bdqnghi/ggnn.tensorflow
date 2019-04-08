
double i = 0;
int reverse (int n);
int main ()
{
	int  n;
	while (cin >> n)
	{
		if (n == 0)
		{
			cout <<"0"<<endl;
			continue;
		}
		if ( n < 0)
		{
			cout << "-";
			n = -n;
		}

		i = 0;

		cout << reverse (n) << endl;
	}

	return 0;
}

int reverse (int n)
{
	if (n < 10)
		return n;
	int t;
	t = reverse(n/10);
	i++;
	return (n%10) * pow(10.0,i)+ t;
}