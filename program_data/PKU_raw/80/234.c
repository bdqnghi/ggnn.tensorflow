int main () {
	int i , j ;
	int Month[13] = { 29 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 } ;
	int year1 , month1 , day1 , year2 , month2 , day2 , run1 = 0 , run2 = 0 ,day = 0;
	cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2 ;
	if ((year1 % 4 == 0 && year1 % 100 != 0) ||(year1 % 400 == 0) )
		run1 = 1 ;
	if ((year2 % 4 == 0 && year2 % 100 != 0) ||(year2 % 400 == 0) )
		run2 = 1;
	if ( year1 == year2 ) {
		if ( month1 == month2 ) {
			day = day2 - day1 ;
		}
		else {
					day += ( Month[month1]-day1 ) ;
				day += day2 ;
				for ( i = (month1+1) ; i < month2 ; i ++ )
					day += Month[i];
				if ( (month1 <= 2 ) && (month2 > 2) && (run1 == 1 ))
					day ++ ;
		}
	}
	else {
		day += (Month[month1] - day1) ;
		for ( i = (month1+1) ; i <= 12 ; i ++ )
			day += Month[i] ;
		if ( ( run1 == 1 ) && ( month1 <=2 ) )
			day ++ ;
		day += day2 ;
		for ( i = 1 ; i < month2 ; i ++ )
			day += Month[i] ;
		if ( ( month2 > 2 ) && ( run2 == 1 ) )
			day++ ;
		for ( i = (year1+1) ; i < year2 ; i ++ ) {
			day += 365 ;
			if ((i % 4 == 0 && i % 100 != 0) ||(i % 400 == 0) )
				day ++ ;
		}
	}
	cout << day ;
}