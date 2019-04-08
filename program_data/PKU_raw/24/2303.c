int main ()
{
	char a[201], b[201][201] = {'0'}, *p = NULL;
	cin.getline(a, 201);
	int i = 0, l = strlen(a), t = 0, s[201] = {0};
	p = a;
	while (*p != '\0')
	{
		if (*p != ' ' && *p != ',')
		{
			s[t]++;
			b[t][i] = *p;
			i++;
		}
		else
		{
			i = 0;
			t++;
		}
		p++;
	}
	int temp1 = s[0], temp2 = s[0];
	char *c, *d;
	c = b[0];
	d = b[0];
	for (i = 0; i <= t; i++)
	{
		if (temp1 > s[i] && s[i] != 0)
		{
			temp1 = s[i];
			c = b[i];
		}
		if (temp2 < s[i] && s[i] != 0)
		{
			temp2 = s[i];
			d = b[i];
		}
	}
	for (; *d != NULL && *d != '0';)
		cout << *d++;
	cout << endl;
	for (; *c != NULL && *c != '0';)
		cout << *c++;
	cout << endl;
	return 0;

}