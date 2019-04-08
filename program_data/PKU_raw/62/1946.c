
int main()
{
	char a[100] = {'\0'};
	char *p;
	cin.get(a, 100, '\n');
	p = a;
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ')
		{
			while (a[i + 1] == ' ')
			{
				for (int l = i + 1; a[l] != '\0'; l++)
					*(p + l) = *(p + l + 1);
			}
		}
	}
	cout << a;
	return 0;
}

