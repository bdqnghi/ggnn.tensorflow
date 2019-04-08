int main()
{
	char str[301];
	char a;
	int i, j, p;
	cin.getline(str, 301);
	a = 65;
	p = 0;
	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
			break;
		if (((str[i] >= 'A') && (str[i] <= 'Z')) || ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			p = 1;
			break;
		}
	}
	if (p == 0) 
		cout << "No" << endl;
	else 
	{
		while (a < 91)
		{
			j = 0;
			for (i = 0; ; i++)
			{
				if (str[i] == '\0')
					break;
				if (str[i] == a) 
					j++;
			}
			if (j != 0)
				cout << a << '=' << j << endl;
			a++;
		}
		a = 97;
		while (a < 123)
		{
			j = 0;
			for (i = 0; ; i++)
			{
				if (str[i] == '\0')
					break;
				if (str[i] == a) 
					j++;
			}
			if (j != 0)
				cout << a << '=' << j << endl;
			a++;
		} 
	}
	return 0;
}
