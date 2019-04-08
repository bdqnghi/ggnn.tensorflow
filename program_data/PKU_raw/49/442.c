void run(int i, char a[500])
{
	int j, k, l;
	char b[500], c[500];
	for (j = 0; j  < 500; j++)
	{
		b[j] = '\0';
		c[j] = '\0';
	}
	int len = strlen(a);
	for (j = 0; j <= len - i; j++)
	{
		for (k = 0; k < i; k++)
			b[k] = a[j + k];
		for (l = 0; l < i; l++)
			c[l] = b[strlen(b) - l - 1];
		for (k = 0; k < i; k++)
		{
			if (b[k] != c[k]) break;
		}
		if (k == i)
		{
			for (k = 0; k < i; k++)
				cout << b[k];
			cout << endl;
		}
	}
}
int main()
{
	int i, len;
	char a[500];
	cin.getline(a,500);
	len = strlen(a);
	for(i = 2; i <= len; i++)
	{
		run(i,a);
	}
	return 0;
}