int F(int,int );
int F( int a , int b ) 
{
	int c = a + b ;
	a = b ;
	b = c ;
	return b ;
}


int main ()
{
	int n , i , j , x[101];
	cin >> n ;
	for ( i = 1 ; i <= n ; i ++)
	{
		cin >> x[i];
		if ( x[i] == 1 )
		{
			cout << "1" << endl ;
			continue ;
		}
		if ( x[i] == 2 )
		{
			cout << "1" << endl ;
			continue ;
		}
		int a = 1 , t , b = 1 , sum = 2; 
		do
		{ 
			t = b ; 
			b = F(a,b);
			a = t ;
			sum ++ ;
		}while (sum < x[i] );
		cout << b << endl ;		
	} 
}