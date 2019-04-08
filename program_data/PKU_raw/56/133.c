
int main(){
	char num[11] , i ;

	for( i = 1 ; num[i - 1] != '\n'; i++ ){
	scanf( "%c" , &num[i] ) ;
	}
	for ( i = 6 ; i <= 10 ; i++){
	num[i] = num[11 - i] ;
	}
	for ( i = 6 ; i <= 10 ; i++){
	printf( "%c" , num[i]) ;
	}
	
	
	return(0);
	
}
 
