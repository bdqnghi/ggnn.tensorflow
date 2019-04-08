int main()
{
    int n, i, count = 0, len = 0;
	char str[500][40], (*p)[40];
	cin >> n;
	p = str;
	for (i = 0; i<n; i++)
		cin >> *(p+i);
	for (i = 0; i<n-1; i++)
	{
		len = strlen(*(p+i));
		if (count + len <= 80)
		{
			if (count + len + 1 + strlen(str[i+1]) <= 80)
			{
				cout << *(p+i) << " ";
				count += len + 1;
			}
			else
			{
				cout << *(p+i);
				cout  << endl;
				count = 0;
			}
		}
		else
		{
			cout <<"#"<< endl;
			cout << *(p+i);
			count = len + 1;
		}
	}
	len = strlen(*(p+n-1));
	if (count + len + 1 <=80)
	{
		cout << *(p+n-1);
		cout << endl;
	}
	else
    {
		cout << endl;
		cout << *(p+n-1) << endl;
	}
	return 0;
}

