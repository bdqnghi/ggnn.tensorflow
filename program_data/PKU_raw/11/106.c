
int mon( int n){
	int day ;
	switch(n){
		case 1 : day = 31 ; break ;
		case 2 : day = 28 ; break ;
		case 3 : day = 31 ; break ;
		case 4 : day = 30 ; break ;
		case 5 : day = 31 ; break ;
		case 6 : day = 30 ; break ;
		case 7 : day = 31 ; break ;
		case 8 : day = 31 ; break ;
		case 9 : day = 30 ; break ;
		case 10: day = 31 ; break ;
		case 11: day = 30 ; break ;
		case 12: day = 31 ; break ;
	}
	return(day);
}
int run(int year){
	int p ;
	if( year % 400 == 0 ) p = 1 ;
	else if( ( year % 100 != 0 ) && ( year % 4 == 0 ) ) p = 1 ;
	else p = 0 ;
	return (p) ;
}

int main(){
	int year , month , date , i , n = 0 ;
	scanf("%d%d%d" , &year , &month , &date );
	for (i = 1 ; i <= month - 1 ; i++){
		n = n + mon(i) ;
	}
	n = n + date ;
	if ( run(year) == 1 ) n = n + 1 ;
	else n = n ;
	printf("%d" , n);

	return(0);
}