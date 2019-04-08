char an[1000000];
void Re(char a[], char *a0)
{
	int len = strlen(a), i;
	for (i = 0; i < len; i++)
		*(a0 + len - i - 1) = a[i];
	*(a0 + len) = '\0';
}
void Mul( char *a)
{
	char a0[10000], re0[10000], re[10000];
	Re(a, a0);
	int len = strlen(a), t = 0, i, p;
	for (i = 0; i < len; i++)
	{
		p = t + (a0[i] - '0') * 2;
		re0[i] = (p % 10) + '0';
		t = p / 10;
	}
	re0[len] = t + '0';
	re0[len + 1] = '\0';
	if (re0[len] == '0')
		re0[len] = '\0';
	//cout<< "*" << re0 << endl;
	Re(re0, re);
	//cout<< "**" << re << endl;
	strcpy(an, re);
	//cout<< "***" << an << endl;
}
int main()
{
	char a[10000] = {'2'}, a0[10000];
	int lena, n, i;
	cin >> n;
	lena = strlen(a);
	if (n == 0)
	{
		cout << 1 << endl;
		return 0;
	}
	for (i = 1; i < n; i++)
	{
		Mul(a);
		strcpy(a, an);
		//cout << a << endl;
	}
	//cout << 
	cout << a << endl;
	//for (i = 0; i < strlen(an); i++)
	//	if (a[i] != '0')
	//		cout << a[i] ;
	return 0;
}
