/*
name:??2?N??
writer:???
time:2013.11.14
*/
int main ()
{
	int n , i , num , j , len = 1 , m ;
	char str[100] ;
	memset(str,'0',99);              //???
	str[99] = '1' ;                  //??????0
	cin >> n ;                       //????
	for ( i = 1 ; i <= n ; i++ )
	{
		for ( j = 100 - len ; j <= 99 ; j++ )
		{
			num = str[j] - '0' ;
			if ( str[j] <= '4' )
				str[j] = str[j] + num ;                     //0-4????
			else
			{
				str[j] = str[j] + num - 10 ;                //5-9????10
				for ( m = j - 1 ;;m--)
				{
					if ( m == 99 - len )                    //????
						len++;
	    			if ( str[m] == '9' )                    //??
					{
	        			str[m] = '0';
						str[m-1] ++ ;
					}
					else 
					{
						str[m]++ ;
						break ;
					}
				}
			}
		}
	}
	for ( j = 100 - len ; j <= 99 ; j++ )                   //??????
		cout << str[j] ;
	cout << endl ;
	return 0 ;
}