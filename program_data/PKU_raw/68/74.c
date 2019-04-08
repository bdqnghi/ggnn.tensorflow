
int ss(unsigned long int n){
	unsigned long int i , s = 0 ;
	if( n % 2 == 0 ) s = 1 ;
	else if( n % 3 == 0 && n != 3 ) s = 1 ;
	else if( n % 5 == 0 && n != 5 ) s = 1 ;
	else if( n % 7 == 0 && n != 7 ) s = 1 ;
	else if( n % 11 == 0 && n != 11 ) s = 1 ;
	else if( n % 13 == 0 && n != 13 ) s = 1 ;
	else if( n % 17 == 0 && n != 17 ) s = 1 ;
	else if( n % 19 == 0 && n != 19 ) s = 1 ;
	else if( n % 23 == 0 && n != 23 ) s = 1 ;
	else if( n % 29 == 0 && n != 29 ) s = 1 ;
	else if( n % 31 == 0 && n != 31 ) s = 1 ;
	else if( n % 37 == 0 && n != 37 ) s = 1 ;
	else if( n % 41 == 0 && n != 41 ) s = 1 ;
	else if( n % 43 == 0 && n != 43 ) s = 1 ;
	else if( n % 47 == 0 && n != 47 ) s = 1 ;
	else if( n % 53 == 0 && n != 53 ) s = 1 ;
	else if( n % 59 == 0 && n != 59 ) s = 1 ;
	else if( n % 61 == 0 && n != 61 ) s = 1 ;
	else if( n % 67 == 0 && n != 67 ) s = 1 ;
	else if( n % 71 == 0 && n != 71 ) s = 1 ;
	else if( n % 73 == 0 && n != 73 ) s = 1 ;
	else if( n % 79 == 0 && n != 79 ) s = 1 ;
	else if( n % 83 == 0 && n != 83 ) s = 1 ;
	else if( n % 87 == 0 && n != 87 ) s = 1 ;
	else if( n % 89 == 0 && n != 89 ) s = 1 ;
	else if( n % 91 == 0 && n != 91 ) s = 1 ;
	else if( n % 97 == 0 && n != 97 ) s = 1 ;
	else if( n % 101 == 0 && n != 101 ) s = 1 ;
	else if( n % 103 == 0 && n != 103 ) s = 1 ;
	else if( n % 107 == 0 && n != 107 ) s = 1 ;
	else if( n % 109 == 0 && n != 109 ) s = 1 ;
	else for ( i = 47 ; i < n / 109; i = i + 2 ){
		if( n % i == 0 ) s = 1 ;
	}
	return(s);
}

int main(){
	unsigned long int i , j , n , a , b ;
	scanf( "%d" , &n ) ;
	for( i = 6 ; i <= n ; i = i + 2){
		a = i ;
		for( j = 3 ; j <= n / 2 && j <= a ; j++){
			if( ss(j) == 0 && ss(i - j) == 0 ){
				a = j ;
				b = i - j ;
			}
		}
	printf("%d=%d+%d\n" , i , a , b ) ;
	}

	return(0);
}
