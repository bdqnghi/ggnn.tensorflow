int main()
{
	int a[1000] = {0}, b[1000] = {0}, l, i, j, k, n = 0;
	char str[1000];
	cin >> str;
	l = strlen(str);
	for(i = 0; i <= l; i++)
	{
		if(str[i] == str[0])
			a[i] = 1;
		else
			a[i] = 2;
	}
	for(j = 0; j <= l - 1; j++)
	{
		if(a[j] == 2)
		{
			for(k = j - 1; k >= 0; k--)
			{
				if(a[k] == 1)
				{
					cout << k << " " << j << endl;
					a[j] = 0;
					a[k] = 0;
					j = 0;
					k = 0;
				    break;
				}
			}
		}
	}
	return 0;
}


