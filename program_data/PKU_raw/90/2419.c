int fp(int, int);
void fj(int, int, int);
int k = 0, p = 0;

int main()
{
	int t, m, n, i;
	cin >> t;
	for(i = 1; i <= t; i++)
	{
		cin >> m >> n;
		k = fp(m, n);
		cout << k << endl;
		p = 0;
	}
	return 0;
}

int fp(int ap, int pl)
{
	if(pl == 1)
		return 1;
	else
	{
		if(ap < pl)
			k = fp(ap, ap);
		if(ap == pl)
			k = ap + fp(ap, pl - 1);
		if(ap > pl)
		{
			fj(ap, pl, 1);
			k = fp(ap, pl - 1) + p;
			p = 0;
		}
	}
}

void fj(int a, int b, int j0)
{
	int j;
	if(b == 1)
		p++;
	else
	{
		for(j = j0; j <= a / b; j++)
			fj(a - j, b - 1, j);
	}
}
		
