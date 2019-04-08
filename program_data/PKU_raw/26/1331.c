int main()
{
	int i = 0;
	char a[102];
	gets (a);
	while (a[i] != '\0')
	{
		if (a[i] == ' ')
		{
			if (a[i-1] != ' ')
				cout << a[i];
		}
		else
			cout << a[i];
		i++;
	}
	return 0;
}