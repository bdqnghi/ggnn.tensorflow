int main()
{
	char a[10000], leap = 0;
	for (int i = 0; i < 10000; i++)
	{
		cin.get(a[i]);
		if (a[i] != ' ')
		{
			leap = 1;
			cout << a[i];
		}
		if (a[i] == ' ')
		{
			if (leap == 1)
			{
				cout << a[i];
				leap = 0;
			}
		}
		if (a[i] == '\n')
		{
			cout << endl;
			break;
		}
	}
	return 0;
}