int i;
int zh(char c[],int i)
{
	if ((c[i] >= 48) && (c[i] <= 57))
		return c[i]-48;
	if ((c[i] >= 65) && (c[i] <= 90))
		return c[i]-55;
	if ((c[i] >= 97) && (c[i] <= 122))
		return c[i]-87;
}
char ch(int a)
{
	if (a <= 9)
		return a+48;
	if( a > 9)
		return a+55;
}
int main()
{
	int a, b, i, j, k, l, s = 0;
	char c[99], d[99];
	for (k = 0; k<= 99; k++)
	{
		c[k] = ' ';
	    d[k] = ' ';
	}
	cin >> a >> c >> b;
	for (i = 0; c[i]!='\0'; i++)
	{
		s = a * s + zh(c,i);
	}
	for (j = 0; j <= 99; j++)
	{
		d[j] = ch ( s % b );
		s = s / b;
		if (s == 0)
			break;
	}
	for (l = 30; l >= 0; l--)
		if (d[l] != ' ')
		cout << d[l];
	return 0;
}