//???????????????????……
int num1[1000] = {0} , num2[1000] = {0} ;
int num[2000] = {0} ;
int n1 , n2 ;
void read()
{
	cin >> n1 >> n2 ;
	for ( int i = 0 ; i < n1 ; i++ )
		cin >> num1[i] ;
	for ( int i = 0 ; i < n2 ; i++ )
		cin >> num2[i] ;
}
void range()
{
	for ( int i = 0 ; i < n1 - 1 ; i++ )
		for ( int j = 0 ; j < n1 - 1 - i ; j++ )
			if ( num1[j] > num1[j+1] )
			{
				int temp = 0 ;
				temp = num1[j] ;
				num1[j] = num1[j+1] ;
				num1[j+1] = temp ;
			}
	for ( int i = 0 ; i < n2 - 1 ; i++ )
		for ( int j = 0 ; j < n2 - 1 - i ; j++ )
			if ( num2[j] > num2[j+1] )
			{
				int temp = 0 ;
				temp = num2[j] ;
				num2[j] = num2[j+1] ;
				num2[j+1] = temp ;
			}
}
void combine()
{
	for ( int i = 0 ; i < n1 ; i++ )
		num[i] = num1[i] ;
	for ( int i = 0 ; i < n2 ; i++ )
		num[n1+i] = num2[i] ;
}
void print()
{//??????????
	for ( int i = 0 ; i < n1 + n2 - 1 ; i++ )
		cout << num[i] << " " ;
	cout << num[n1+n2-1] << endl ;
}
int main()
{
	read() ;
	range() ;
	combine() ;
	print() ;

	return 0 ;
}
// ( > w < ) finished~