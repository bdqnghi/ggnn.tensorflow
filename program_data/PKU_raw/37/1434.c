int main()
{
	int n, i, j, k, len, flag, mark, judge;
	cin >> n; // n???????
	char str[100000], outcome;
	for (i = 0; i < n; i++)
	{
		cin >> str;
		len = strlen(str);
		flag = 0;
		for (j = 0; j < len - 1; j++)
		{
			if (str[j] != '\0')
			{
				for (k = j + 1; k < len; k++)
				{
					if (str[j] == str[k])  
					{
						str[j] = '\0';
						str[k] = '\0';
						break;
					} // end if
				} // end for
			} // end if
		} // end for
		for (k = 0; k < len; k++)
		{
			if (str[k] != '\0')
			{
				outcome = str[k];
				break;
			}
			if (k == len - 1)
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << outcome << endl;
		}
		else
		{
			cout << "no";
		}
		if (i != n - 1)
		{
			cout << endl;
		}
	}
	return 0;
}
		