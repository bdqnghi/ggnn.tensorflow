
int main(){
	int n , i , j , a , x1 , y1 , x2 , y2 ;
	scanf( "%d" , &n );
	x1 = n ;

	for( i = 1 ; i <= n ; i++){
		for( j = 1 ; j <= n ; j++){
			scanf( "%d" , &a );
			
			if ( a == 0 && j < x1 ) {
				x1 = j ; 
				y1 = i ;
			}
			if ( a == 0 ){
				x2 = j ;
				y2 = i ;
			}
		}
	}

	int area = ( x2 - x1 - 1 ) * ( y2 - y1 - 1 ) ;
	printf( "%d\n%d\n%d" , area ,x2-x1-1, y2-y1-1) ;


	return(0);



}