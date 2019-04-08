
char a[101];
int find(char a[], int b,int x)
{
	int i;
	for (i = b; i <x; i++)
	{
		if (a[i + 1] == '$')
		{
			return 0;
		}
		if (a[i+1] == '?')
		{
			a[i+1] = ' ';
			a[b] = ' ';
			return 1;
		}
	}
	return 0;

}

int main()
{
	while (cin.getline(a,101))
	{
		//cin.getline(a, 101);
		int x = strlen(a), i, l[100], t = 0, temp;
		for (i = 0; i < x; i++)
			cout << a[i];
		cout << endl;
		for (i = 0; i < x; i++)
		{
			if (a[i] == '(')
			{
				a[i] = '$';
				l[t] = i;
				t++;
			}
			else if (a[i] == ')')
			{
				a[i] = '?';
			}
			else
				a[i] = ' ';
		}
		for (i = 0; (i < t) && (i >= 0);)
		{
			if (a[l[i]] == ' ')
			{
				i++; 
				continue;
			}
			temp = find(a, l[i], x);
			if (temp == 0)
				i++;
			if (temp == 1)
			{
				i = 0;
				continue;
			}
		}
		for (i = 0; i < x; i++)
			cout << a[i];
		cout << endl;
	}
	return 0;
}