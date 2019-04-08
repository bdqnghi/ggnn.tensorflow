
int odd(int n)
{
	cout << n << "*3+1=" << n * 3 + 1 << endl;
	n = n * 3 + 1;
	return n;
}

int even(int n)
{
	cout << n << "/2=" << n / 2 << endl;
	n = n / 2;
	return n;
}

int main()
{
	int n;
	cin >> n;
	do{
		if (n == 1)
		{
			cout << "End" << endl;
			break;
		}
		if (n % 2 == 0)
			n = even(n);
		else
			n = odd(n);
	}while(1);
	return 0;
}