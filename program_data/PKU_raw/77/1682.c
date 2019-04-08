

int match(int);
char a[105], b;

int main()
{
	cin >> a;

	b = a[0];

	match(0);

	return 0;
}

int match(int p)
{
	if (a[p] == b)
	{
		int q = match(p + 1);
		cout << p << " " << q << endl;
		return match(q + 1);
	}
	else
		return p;
}