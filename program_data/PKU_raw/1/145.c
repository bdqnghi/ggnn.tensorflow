//*************************************************
//*file: 1000012912_006.cpp                       *
//*author: ???                                 *
//*date?2010.12.01                               *
//*function?????                             *
//*************************************************
int sum(int);                      //sum??????????a=a?
int g_count, g_j;                        //count???-1,j?????
int main()
{
	int n, a, i;                        //n????a?????
	cin >> n;
	for ( i = 0; i < n; i ++ )
	{
		g_count = 0;
		g_j = 2;
		cin >> a;
		cout << sum(a) + 1 << endl;
	}
	return 0;
}
int sum( int a)
{
	int i, b;
	b = (int)sqrt( (double)a );
	for ( i = g_j; i <= b; i++ )           
	{
		if ( a % i == 0 )                  //?a??i????????????1
		{
			g_j = i;                       //j??i???????
			g_count++;
			sum( a / i );		
		}
	}
	return g_count;
}
	