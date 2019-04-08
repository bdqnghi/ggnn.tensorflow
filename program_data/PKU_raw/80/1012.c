int main ()
{
	int syear, smonth, sday,eyear, emonth,eday;
	int leap[3001]={0},i;
	int days=0;
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> syear >> smonth >> sday ;
	cin >> eyear >> emonth >> eday ;
	for (i=1; i<=3000; i++ )//??????
		leap[i]= (( (i % 4==0) && (i % 100!=0)) || i % 400==0);
	days = days+(eyear-syear)*365;
	for ( i=syear; i<= eyear; i++ )
		days = days+ leap[i]; 
	for ( i=1; i<= emonth-1; i++ )
		days = days + m[i];
	for ( i=1; i<= smonth - 1; i++ )
		days = days - m[i];
	if ( leap [ syear ] == 1 && smonth > 2 )
		days = days -1;
	if ( leap [eyear ] ==1 && emonth <= 2 )
		days = days -1;
	days = days + eday - sday ;
	cout << days << endl; 
	return 0;
}
