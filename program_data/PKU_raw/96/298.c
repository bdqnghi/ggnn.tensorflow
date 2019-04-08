int main()
{
	char a[100];
	int i, l, r, L, j, b[100];
	gets(a);
	l = strlen(a);
	if (l == 1)
	{
		cout << "0" << endl;
	    cout << a[0] - '0';
    }
	if (l == 2)
	{
		b[0] = (10 * (a[0] - '0') + a[1] - '0') / 13;
		r = (10 * (a[0] - '0') + a[1] - '0') % 13;
		cout << b[0] << endl;
	    cout << r;
    }
	if (l > 2)
	{
	    L = l - 2;
	    b[0] = (100 * (a[0] - '0') + 10 * (a[1] - '0') + a[2] - '0') / 13;
	    r = (100 * (a[0] - '0') + 10 * (a[1] - '0') + a[2] - '0') % 13;
	    for (i = 1; i < L; i++)
		{
		    b[i] = (10 * r + a[i + 2] - '0') / 13;
	        r = (10 * r + a[i + 2] - '0') % 13;
		}
	    for (i = 0; i < L; i++)
	        cout << b[i];
	    cout << endl << r;
	}
    return 0;
}