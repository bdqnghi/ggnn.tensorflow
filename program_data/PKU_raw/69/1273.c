
int cmp(const void * p1, const void * p2)
{
	return 0;
}

char a[255];
char b[255];
int an[255];
int bn[255];
int c[255];

int main()
{
	cin >> a;
	cin >> b;

	memset(an, 0, 255);
	memset(bn, 0, 255);
	memset(c, 0, 255);

	int la = strlen(a);
	int lb = strlen(b);

	for (int i = la -1; i >= 0; i --)
		an[la - 1 - i] = a[i] - '0';
	for (int i = lb -1; i >= 0; i --)
		bn[lb - 1 - i] = b[i] - '0';

	//for (int i = 0; i < la; i ++)
	//	cout << an[i];
	//cout << endl;
	//for (int i = 0; i < lb; i ++)
	//	cout << bn[i];

	int pos = 0;
	for (int i = 0; i < la || i < lb; i ++)
	{
		if (an[i] + bn[i] + c[i] >= 10)
		{
			c[i] = an[i] + bn[i] + c[i] - 10;
			c[i + 1] ++;
		}
		else
		{
			c[i] = an[i] + bn[i] + c[i];
		}
	}
	int i = 254;
	while (i >= 0 && c[i] == 0)
		i --;

	if (i < 0)
		i = 0; 

	while (i >= 0)
	{
		cout << c[i];
		i --;
	}
	cout << endl;
	return 0;
}