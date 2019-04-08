int main()
{
	int n;
	cin >> n;
	char word[600][40];
	char (*p)[40] = word;
	for (int i = 0; i < n ;i++)
		cin >> word[i];
	int sum = 0;
	int flag = 1;
	for (int i = 0; i < n ; i++,p++)
	{
		if (flag)
		{
			sum += strlen(word[i]);
		}
		else
		{
			sum += strlen(word[i]) + 1;
		}
		if (sum <= 80)
		{
			if (flag)
			{
				cout << *p;
				flag = 0;
			}
			else
				cout << " " << *p;
		}
		else
		{
			cout << endl;
			flag = 1;
			sum = 0;
			i--;
			p--;
		}
	}
	return 0;
}


