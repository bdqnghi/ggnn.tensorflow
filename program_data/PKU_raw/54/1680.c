/*************************
??cpp1
?????
???
2013/12/4
**************************/
int m, n, k;
int f (int x, int y);
int main()
{
	
	cin >> n >> k;
	m = 1;
	while (1)
	{
	    if ( f(m, n) )
			break;
		m++;
	}
	cout << m;
	return 0;
}
int f (int x, int y)
{
	if (y==1)
	{
		if (x >= n+k && (x-k) % n == 0)
			return 1;
		else
			return 0;
	}
	if ((x-k) % n != 0)
		return 0;
	x = x -k - (x-k)/n;
	return f(x, y-1);
}


