int main()
{
	char a[400][50] = {0};
	int i, b[400];
	int n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{	
		cin >> a[i];
		b[i] = strlen(a[i]);
	}
	int num;
	int length = b[1];
	i = 1;
	cout << a[1];
	while(1)
	{
		if (i > 1)
		length = length + 1 + b[i];
			if (length + 1 + b[i + 1] <= 80)
			{
				cout << " " << a[i + 1];
			}
			else 
			{
				cout << endl << a[i + 1];
				length = -1;
			}
		i++;
		if (i == n)
			break;
	}
	return 0;
}