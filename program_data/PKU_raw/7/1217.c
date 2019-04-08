//*********************
//function:????
//date:2012/12/28
//writer:???
//*********************
int main()
{
	char a[300], b[300], replace[300];
	cin >> a >> b >> replace;
	char *p;
	int alen, blen, relen, i, j;
	p = strstr(a, b);//????
	if (p == NULL)//????
		cout << a << endl;
	else//???
	{
		alen = strlen(a);
		blen = strlen(b);
		relen = strlen(replace);
		for (i = 0;&a[i] != p;i++)//????
			cout << a[i];
		cout << replace;
		i += blen;
		for (;i < alen - blen + relen;i++)
			cout << a[i];
		cout << endl;
	}
	return 0;
}