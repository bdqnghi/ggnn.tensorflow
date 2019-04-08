//???2010?11?5?
//???1000010586_???
//???????

int main()
{
	int i , j , k , m , p , q , num , ans = 0;       //????
	int a[5][5] , max[5] = {0}, s[5];                //??3???                
	for ( p = 0 ; p <= 4 ; p++ )
	{
		for ( q = 0 ; q <= 4 ; q++ )                 //????
		{
			cin >> a[p][q];
		}
	}
	for ( i = 0 ; i <= 4 ; i++ )                     //????????
	{
		max[i] = a[i][0];
		s[i] = 0;
		for( j = 1 ; j <= 4 ; j++)
		{	
			 if ( a[i][j] >= max[i] )
			 {
				max[i] = a[i][j] ;
				s[i] = j;                            //????
			 }
		} j = 0;
	}
	for ( k = 0 ; k <= 4 ; k++)                      //???????
	{
		num = 0;
		for ( m = 0 ; m <= 4 ; m++ )
		{
			if ( max[k] > a[m][s[k]])
			num = 1;
		}
			if ( num == 0 )
			{ cout << k+1 << " " << s[k]+1  << " " << max[k] << endl;
			ans++;}
		
	}
	if ( ans == 0 )
		cout << "not found" << endl;                 //???????
	return 0;
}