int pan(int);
int main()
{
	int a;
	cin >> a;
	while(a != 1)
	{
		a = pan(a);
	}
	cout << "End";
	return 0;
}
int pan(int a)
{
	int b;
	if(a % 2 == 0)
	{
		b = a / 2;
		cout << a << "/2=" << b << endl;
	}
	else
	{
		b = a * 3 + 1;
		cout << a << "*3+1=" << b << endl;
	}
	return b;
}

