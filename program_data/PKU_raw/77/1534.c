int a[100], n, flag = 0;
char str[100], x, y;
void paidui(int n)
{
	int i = 0;
	for (; i < n;i++)
	{
		if (str[a[i]] == x && str[a[i + 1]] == y)
		{
			cout << a[i] << ' ' << a[i + 1] << endl;
			break;
		}
	}
		for (; i < n - 2; i++)
			a[i] = a[i + 2];
		if (n - 2 >= 2)
			paidui(n - 2);
}
int main ()
{
	cin.getline (str,100);
	n = strlen(str);
	x = str[0];
	for(int i = 0; i < n; i++)
	{
		if (str[i] != x)
		{
			y = str[i];
		    flag = 1;
		}
		if (flag == 1)
			break;
	}
	for (int i = 0; i < n; i++)
		a[i] = i;
	paidui(n);
	return 0;
}
