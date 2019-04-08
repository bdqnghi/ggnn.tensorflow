
int main()
{
	char a[100], b[100];
	cin.getline(a, 101);
	int i, j = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if(a[i] != ' ')
			b[j] = a[i];
		if (a[i - 1] != ' ' && a[i] == ' ')
			b[j] = ' ';
		
		if (a[i - 1] == ' ' && a[i] == ' ')
			continue;
		j++;
		
	}
	b[j] = '\0';
	for (i = 0; b[i] != '\0'; i++)
		cout << b[i];


	return 0;
}