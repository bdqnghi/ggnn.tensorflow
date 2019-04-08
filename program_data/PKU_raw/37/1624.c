int search();
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		search();
	}
	return 0;
}

int search()
{
	int i, l, j;
	char a[100000];
	cin >> a;
	l = strlen(a);
	int b[27] = {0};
	for (i = 0; i < l; i++)
		b[a[i] - 'a']++;
	int p = 0, mark = l - 1, k, kk;
	for (i = 0; i < 26; i++)
		if(b[i] == 1)
		{	
			p = 1;
			k = i;
			for (j = 0; j < l; j++)
				if (a[j] == 'a' + k)
				{
					if(j < mark)
					{
						mark = j;
						kk = k;
					}
				}
		}
	if (p == 1)
		cout << a[mark] << endl;
	else
		cout << "no" << endl;
	return 0;
}