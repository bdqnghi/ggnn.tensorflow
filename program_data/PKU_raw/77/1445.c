int main()
{
	char a[100], char1, char2;
	int i, j;
	cin.getline(a, 100);
	char1 = a[0];
	for (i = 0; i < 100; i++)
		if (a[i] != a[0])
		{
			char2 = a[i];
			break;
		}
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == char2)
		{
			for (j = i; j >= 0; j--)
				if (a[j] == char1)
				{
					cout << j << " " << i << endl;
					break;
				}
			a[i] = ' ';
			a[j] = ' ';
		}
		i++;
	}
	return 0;
}