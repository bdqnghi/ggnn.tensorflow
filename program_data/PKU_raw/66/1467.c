
int main()
{
	int year , month , date;
	cin>> year >> month >> date;
	int days=0;
	int i=0;
	for(;year>=400;i++)
		year = year-400;

	for(;i > 2800;)
		i -= 2800;
	days = days+ i * 146097;

	if(year != 0)
		for(i=1 ;i < year; i++)
			if((i%4 == 0 && i%100 != 0) || (i%400 == 0))
				days += 366;
			else
				days += 365;
	else 
		days -= 366;

	

	int a[13] = { 0 , 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };
	for(i=1; i < month; i++ )
		days += a[i];

	if(((year%4 == 0 && year%100 != 0) || (year%400 == 0)) && (month >= 3) )
		days++;
	
	days += date;



	char b[][5] = {"Sun.","Mon.", "Tue.", "Wed.", "Thr.", "Fri.", "Sat."};	
	int j = days %7;
	cout << b[j];

	return 0;
}