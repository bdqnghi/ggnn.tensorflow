int main()
{
	char c, str[50], str1[50], str2[50];
	int max = 0, min = 50, i = 0, j;
	do
	{
		c = cin.get();
		if (c != ',' && c != ' ' && c != '\n')
			str[i++] = c;
		else
		{
			if (i > max)
			{
				j = i;
				max = i;
				while (i > 0)
				{
					i--;
					str1[i] = str[i];
				}
				i = j;
			}
			if (i < min && i != 0)
			{
				min = i;
				while (i > 0)
				{
					i--;
					str2[i] = str[i];
				}
			}
			i = 0;
		}
	}while(c != '\n');
	for (i = 0; i < max; i++)
		cout << str1[i];
	cout << endl;
	for (i = 0; i < min; i++)
		cout << str2[i];
	cout << endl;
	return 0;
}