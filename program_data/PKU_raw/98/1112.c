
int main()
{
	int n, len, i, letter, flag;
	cin >> n;
	char word[1000][41];
	len = 0;
	letter = 0;
	flag = 0;
	for (i = 0; i < n; i++)
	{
		cin >> word[i];
	}
	for (i = 0; i < n; i++)
	{	
		if (flag == 1)
		{
			letter++;
		}
		len = strlen(word[i]);
		letter += len;
		if (letter > 80)
		{
			cout << endl;
			letter = len;
			flag = 0;
		}
		if (flag == 1)
		{
			cout << " " << word[i];
		}
		else
		{
			cout << word[i];
			flag = 1;
		}
	}
	return 0;
}
