/*???????
  ??????1200012829
  ???2012.10.9*/
int main ()
{
	int n, a, b, i, x = 0, k = 0;
	cin >> n;
	for ( i = 1; i <= n; i++ )
	{
		cin >> a >> b;
		if ( 90 <= a && a <= 140 && 60 <=b && b <= 90)
		{
			x = x + 1;
		}
		else 
		{
			if ( k < x )
			{
				k = x;
			}
			x = 0;
		}
	}
	if ( k >= x )
	{
		cout << k << endl;
	}
	else
	{
		cout << x << endl;
	}
	return 0;
}
