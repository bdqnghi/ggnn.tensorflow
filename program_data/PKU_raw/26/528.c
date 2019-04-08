
int main()
{
	char a[100];
	int flag[100];
	cin.getline(a,101);
	int i, j, n;
	for (i = 0; a[i] != '\0'; i++)
	{
		flag[i] = 1;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' )
		{
			n = i;
			for (j = n + 1; a[j] == ' '; j++)
				if (a[j] == ' ')
					flag[j] = 0; 
			
		}
	}
	for (i = 0; a[i] != '\0'; i++)
		if (flag[i] == 1)
			cout << a[i];
	return 0;
}

	