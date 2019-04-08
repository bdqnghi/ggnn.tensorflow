int main()
{
	char str[81];            //_ is 95 ,A is 65, a is 97
	int i, j, l, g;
	int n;
	cin >> n;
	cin.get();
	for (i = 1; i <= n; i ++)
	{
		g = 0;
		gets(str);
		l = strlen(str);
		for (j = 0; j < l; j ++)
		{
			
			if (str[0] == '_' || (str[0] <= 'z' && str[0] >= 'a') || (str[0] <= 'Z' && str[0] >= 'A'));
			else
			{
				g = 1;
				break;
			}
			if (str[j] == '_' || (str[j] <= 'z' && str[j] >= 'a') || (str[j] <= 'Z' && str[j] >= 'A') || (str[j] >= '0' && str[j] <= '9'))
			{
				continue;
			}
			else
			{
				g = 1;
				break;
			}
		}
		if (g)
		{
			cout << 0 << endl;
		}
		else 
		{
			cout << 1 << endl;
		}
	}
	return 0;			
}