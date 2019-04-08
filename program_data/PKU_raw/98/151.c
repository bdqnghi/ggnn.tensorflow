int main()
{
	char a[500][41];
	int n, i, len, b[500];
	int *q = b;
	char (*p)[41] = a;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> *(p + i);
		*(q + i) = strlen(*(p + i));
	}
	cout << *p;
	len = *q + 1;
	for(i = 1; i < n; i++)
	{
		if(len + *(q + i) <= 80)
		{
			cout << ' ' << *(p + i);
			len += 1 + *(q + i);
		}
		else
		{
			cout << endl << *(p + i);
			len = *(q + i) + 1;
		}
	}
	return 0;
}


