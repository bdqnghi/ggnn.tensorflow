
int main()
{
	char str[200][200], ch;
	int i = 0, j = 0, count, longest = 0, shortest = 200, max, min, len[200];
	while ((ch = cin.get()) != '\n')
	{
		if (ch == ' ' || ch == ',')
		{
			if(j != 0)
			{
				len[i] = j;
				i++; 
				j = 0;
			}
		}
		else
		{
			str[i][j++] = ch;
		}
	}
	len[i] = j;
	count = i;
	for (i = 0; i <= count; i++)
	{
		if (len[i] < shortest)
		{
			shortest = len[i];
			min = i;
		}
		if (len[i] > longest)
		{
			longest = len[i];
			max = i;
		}
	}
	for (i = 0; i < longest; i++)
		cout << str[max][i];
	cout << endl;
	for (i = 0; i < shortest; i++)
		cout << str[min][i];
	cout << endl;
	return 0;
}


