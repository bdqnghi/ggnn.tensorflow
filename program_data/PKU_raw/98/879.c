
int main()
{
	char word[300][40];
	int n, i, a[300] = {0}, flag = 0;

	cin >> n;

	for (i = 0; i < n; i++)
	{
		scanf("%s", word[i]);
	}
	
	int begin = 0, j = 0;
	int s = strlen(word[0]);
	
	for (i = 1; i < n; i++)
	{
		s += strlen(word[i]) + 1;
		if (s > 80)
		{
			for (j = begin; j < i; j++)
			{
				if (flag == 0)
				{
					cout << word[j];
					a[j] = 1;
					flag = 1;
				}
				else
				{
					cout << " " << word[j];
					a[j] = 1;
				}
			}
			cout << endl;
			flag = 0;
			begin = i;
			s = strlen(word[i]);
		}			
	}

	flag = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			for (j = i; j < n; j++)
			{
				if (flag == 0)
				{
					cout << word[j];
					flag = 1;
				}
				else
				{
					cout << " " << word[j];
				}
			}
			break;
		}
	}

	return 0;
}
