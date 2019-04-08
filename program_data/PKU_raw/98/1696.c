int main()
{
	char str[2000][41];
	int n;
	cin >> n;
	int i;
	int length[2000];
	int *p = length;
	for(i = 1; i <= n; i++)
	{
		cin >> str[i];
        *(p + i) = strlen(str[i]);
	}
	*(p + i) = 1000;
	int total = 80;
	for(i = 1; i <= n; i++)
	{
		if(*(p + i) <= total)
		{
			cout << str[i];
			total -= *(p + i);
			total--;
			if(*(p + i + 1) <= total)
				cout << " ";
		}
		else
		{
			cout << endl;
			total = 80;
			i--;
		}
	}
	return 0;
}

