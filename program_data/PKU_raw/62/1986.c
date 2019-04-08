

int main()
{
	
	char s[100], *p;
	int i, l;
	p = s;
	cin.getline(s, 100);
	l = strlen(s);
	int sum = l;
	for (i = 0;i < l;i++)
	{
		if (p[i] == ' ')
		{
			if (p[i - 1] == ' ')
			{
				int k = i;
				while (p[i] == ' ')
					i++;
				for (int j = k;j < l - (i - k);j++)
					p[j] = p[j + i - k];
				if (i <= sum)
					sum = sum - (i - k );
				i = k ;
			}
		}
	}
	for (i = 0;i < sum;i++)
		cout << p[i];

	return 0;
}
