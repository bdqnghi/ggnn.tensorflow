void s(char[], int);
int main()
{
	char a[10000];
	cin.getline(a, 1000);
	int pos = 0, flag = 1;
	for (; a[pos] != '\0'; pos++)
	{
		if (a[pos] == ' ')
		{
			if (pos == 0)
			{
				for (int i = 0; a[i] != '\0'; i++)
					a[i] = a[i + 1];
				pos--;
			}
			else
			{
				if (flag == 0)
				{
					for (int i = pos; a[i] != '\0'; i++)
						a[i] = a[i + 1];
					pos--;
				}
				else
					flag = 0;
			}
		}
		else
			flag = 1;
	}
	if (flag == 0)
		a[pos - 1] = '\0';
	cout << a << endl;
	return 0;
}







