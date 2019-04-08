int main ()
{
	int m, s, p,i,j;
	cin >>m;
	for (s = 3; s <= m / 2;s = s + 2)
	{
		p = m - s;
		for ( i = 2; i <= (int) sqrt (s); i = i + 1 )
			{if ( s % i == 0 )
			break;}
		for ( j = 2; j <= (int) sqrt (p); j = j + 1 )
			{if ( p % j == 0 )
			break;}
		if ( j == (int) sqrt (p) + 1 && i == (int) sqrt (s) +1)
			cout << s << " " <<p <<endl;
	}
	return 0;
}