
int main()
{
	int row , col ;
	cin >> row >> col ;
	int a[row][col] ;
	for( int i = 0 ; i < row ; i ++ )
		for( int j = 0 ; j < col ; j ++ )
			cin >> a[i][j] ;
	int minrow = 0 , maxrow = row - 1 ,
			mincol = 0 , maxcol = col - 1 , n = 0 , i = 0 , j = 0 , count = 0 ;
	for( ; n > -1 ; n ++ )
	 {
	/*for( ; minrow <= i && i <= maxrow && mincol <= j && j <= maxcol ;
			n % 2 == 0 ? n % 4 == 0 ? j ++ : j -- : n % 4 == 1 ? i ++ : i -- )
		cout << a[i][j] << endl ;*/
		if( n % 2 == 0 )
	{
		if( n % 4 == 0 ) {
			for( ; j <= maxcol ; j ++ )
			{
				cout << a[i][j] << "\n"  ;
				count ++ ;
			}
			minrow ++ ; j -- ; i ++ ; }
		else {
			for( ; j >= mincol ; j -- )
			{
				cout << a[i][j] << "\n" ;
				count ++ ;
			}
			maxrow -- ; j ++ ; i -- ; }
	}
	else
	{
		if( n % 4 == 1 ){
			for( ; i <= maxrow ; i ++ )
			{
				cout << a[i][j] << "\n" ;
				count ++ ;
			}
			maxcol -- ; i -- ; j -- ; }
		else {
			for( ; i >= minrow ; i -- )
			{
				cout << a[i][j] << "\n" ;
				count ++ ;
			}
			mincol ++ ; i ++ ; j ++ ;}
	}
    if( count == row * col ) break ;
	}
	return 0 ;
}