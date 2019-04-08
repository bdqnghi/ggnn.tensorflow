//????
//2010?11?24?
//1000012753 ???
char str[1000];
int cycle(int a, int b)
{
	while (b >= 0)
	{
		if (str[a] == str[a + b - 1])
		{
			a++;
			b -= 2;
		}
		else
			return 1;
	}
	return 0;
}

int main()
{
	int i, j, k, l;
	cin >> str;
	l = strlen(str);
	for (i = 2; i <= l; i++)
		for (j = 0; j <= l - i; j++)
			if (cycle (j, i) == 0)
			{
				for (k = j; k < j + i; k++)
					cout << str[k];
				cout << endl;
			}
	return 0;
}