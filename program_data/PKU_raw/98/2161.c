
char a[1000][30];
int la[100] = {0};

int main()
{
	int n, i;
	char b[10000];
	cin >> n;
	cin.get();
	cin.getline(b, 10000);
	int lb = strlen(b);
	int p = 0, t = 1;
	for (i = 0; i <= lb - 1; i++)
	{
		if (b[i] == ' ')
		{
			t++;
			p = 0;
		}
		else
		{
			a[t][p] = b[i];
			p++;
		}
	}
	for (i = 1; i <= n; i++)
	{
		la[i] = strlen(a[i]);
	}
	int num = 0;
	for (i = 1; i <= n; i++)
	{
		cout << a[i];
		num = num + la[i];
		if ((num + 1 + la[i + 1] <= 80) && (i != n))
		{
			cout << " ";
			num++;
		}
		else
		{
			cout << endl;
			num = 0;
		}
	}
	return 0;
}