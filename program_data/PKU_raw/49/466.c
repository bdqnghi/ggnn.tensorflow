
char a[500];

void checkTheSame(char t[], int n)
{
	int len, i, j, k, p;
	len = strlen(t);
	for (i = 0; i < len - n; i++)
	{
		j = i + n;
		k = i;
		while (j > k)
		{
			if (a[k] != a[j])
				break;
			k++;
			j--;
		}
		if (j <= k)
		{
			for (p = i; p <= i + n; p++)
				cout << t[p];
			cout << endl;
		}
	}
}

int main()
{
	int n = 1, len;
	cin.getline(a, 500);
	len = strlen(a);
	for (n = 1; n < len; n++)
		checkTheSame(a, n);
	return 0;
}