/*
name:????
writer:???
time:2013.11.1
*/
int main()
{
	int a[101][101] , b[101][101] , x1 , y1 , x2 , y2 , c[101][101] , i , j , k ;
	cin >> x1 >> y1 ;
	for ( i = 1 ; i <= x1 ; i++ )
	    for ( j = 1 ; j <= y1 ; j++ )
			cin >> a[i][j] ;                     //??????a
	cin >> x2 >> y2 ;
	for ( i = 1 ; i <= x2 ; i++ )
	    for ( j = 1 ; j <= y2 ; j++ )
			cin >> b[i][j] ;                     //??????b
	for ( i = 1 ; i <= x1 ; i++ )
	{
	    for ( j = 1 ; j <= y2 ; j++ )
		{
			c[i][j] = 0 ;                        //???
			for ( k = 1 ; k <= y1 ; k++ )
				c[i][j] += a[i][k] * b[k][j] ;   //??
			cout << c[i][j] ;                    //??
			if ( j == y2 )                       //??????????
				cout << endl ;
			else 
				cout << " " ;
		}
	}
	return 0;
}