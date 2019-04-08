int main()
{
	char s[101];
	gets(s);
	int l = strlen(s);
	s[l] = ' ';
	s[l + 1] = '\0';
	char a[100];
	cin >> a;
	char b[100];
	cin >> b;
	char s1[100];
	int i;
	int j = 0;
	for(i = 0; i < strlen(s); i ++)
	{
		if(s[i] != ' ')
		{
			s1[j] = s[i];
			j ++;
		}
		else
		{
			s1[j] = '\0';
			j = 0;
			if(strcmp(a, s1) == 0)
				cout << b;
			else
				cout << s1;
			if(i != strlen(s) - 1 )
				cout << ' ';
		}
	}
}
