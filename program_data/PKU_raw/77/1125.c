
void duilie(char a[])
{
	int i, j;
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'w')
		{
			for (j = i - 1; j >= 0; j--)
			{
				if (a[j] != '0') 
				{
					cout << j << " " << i << endl;
					a[j] = '0';
					a[i] = '0';
					break;
				}
			
			}
		
		}
	
	}

}

int main()
{
	char s[101];
	int i;
	cin.getline(s, 101);
	for (i = 1; i < strlen(s); i++)
	{
		if (s[i] == s[0]) s[i] = 'm';
	}
	s[0] = 'm';
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] != 'm') s[i] = 'w';	
	}
	duilie(s);

	return 0;
}
