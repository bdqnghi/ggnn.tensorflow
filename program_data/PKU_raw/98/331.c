int main()
{
	int n, i, count = 0, len,j, flag = 0;
	char word[2000][2000];
	char *p = NULL;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> word[i];
		len = strlen(word[i]);
		word[i][len] = 0;
	}
	i = 0;
	while(i < n)
	{
		p = word[i];
		j = 0; 
		{
			len = 0;
		//	while (*(p+len) != 0) len++;
		len = strlen(word[i]);
		//	cout << count << endl;
		//	cout << len << endl;
			if (len > (80 - count))
			{
				cout << endl;
				while (*p != 0)
				{
					cout << *p;
					p++;
				}
				
				i++;
				count = len + 1;
			}
			else
			{
				if (! count == 0) 	cout << " ";
				while (*p != 0)
				{
					cout << *p;
					p++;
				}
				count += len;
				count++;
				i++;
			}
		}
	}

	return 0;
}