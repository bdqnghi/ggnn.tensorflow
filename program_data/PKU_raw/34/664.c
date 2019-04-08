void cal (int x)
{
	if (x == 1)
		cout << "End" << endl;
	if (x > 1)
	{
	if (x % 2 != 0)
	{
		cout << x <<"*3+1=";
		x = x * 3 + 1;
		cout << x << endl;
	}
	if (x % 2 == 0)
	{
		cout << x <<"/2=";
		x = x / 2;
		cout << x << endl;
	}
	cal ( x );
	}
	return;
}

int main()
{
	int x;
	cin >> x;
	cal (x );
	return 0;
}

