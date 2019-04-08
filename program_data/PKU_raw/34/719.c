int ji(int);
int ou(int);
int main()
{
	int	 n;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n = ou(n);
		}
		else
		{
			n = ji(n);
		}


	}
	cout << "End" << endl; 
return 0;
}
int	ou(int n)
{
	int k = n / 2;
	cout << n << "/2=" << k << endl;
	return k;
}
int	ji(int n)
{
	int k = n * 3 + 1;
	cout << n << "*3+1=" << k << endl;
	return k;
}
