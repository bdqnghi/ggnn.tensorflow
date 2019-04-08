
int main()
{
	int n, i;
	char word[41], *p = NULL;
	int count = 0, flag_first_word = 1;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> word;
		p = word;
		if (flag_first_word == 1)
		{
			cout << p;
			count = strlen(p);
			flag_first_word = 0;
		}
		else
		{
			if (count + strlen(p) + 1 <= 80)
			{
			
				cout << " " << p;
				count += strlen(p) + 1;
			}
			else
			{
				cout << endl << p;
				count = strlen(p);
			}
		}
	}
	return 0;
}