

unsigned long int run(int year){
	int p ;
	if( year % 400 == 0 ) p = 1 ;
	else if( ( year % 100 != 0 ) && ( year % 4 == 0 ) ) p = 1 ;
	else p = 0 ;
	return (p) ;
}

int main(){	
	int mon[13] ;
	mon[1] = 31 ;
	mon[2] = 28 ;
	mon[3] = 31 ;
	mon[4] = 30 ;
	mon[5] = 31 ;
	mon[6] = 30 ;
	mon[7] = 31 ;
	mon[8] = 31 ;
	mon[9] = 30 ;
	mon[10] = 31 ;
	mon[11] = 30 ;
	mon[12] = 31 ;
	unsigned long int i , yahr , monat , day , tag = 0 , zzz ;
	scanf("%d%d%d" , &yahr , &monat , &day ) ;
	
	yahr = yahr - (yahr/2800 - 1) * 2800;

	for( i = 1 ; i <= yahr - 1 ; i= i++){
		tag = tag + 365 + run(i);		
	}
	for( i = 1 ; i <= monat - 1 ; i++){
		tag = tag + mon[i] ;
	}
	tag = tag + day ;
	if( monat > 2 ) tag = tag + run(yahr);

	zzz = tag % 7;


	switch(zzz){
		case 1 : printf("Mon.");break;
	    case 2 : printf("Tue.");break;
		case 3 : printf("Wed.");break;
		case 4 : printf("Thu.");break;
		case 5 : printf("Fri.");break;
		case 6 : printf("Sat.");break;
		case 0 : printf("Sun.");break;
	}

	return(0);
}
