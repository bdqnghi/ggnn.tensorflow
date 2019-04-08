
int main()
{
	int year, month, day, i, temp, day_year=365%7, day_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char week[7][5]={"Sun.","Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
	scanf("%d%d%d", &year, &month, &day);
	temp = day_year*(year-1);
	temp += year/4-year/100+year/400;
	for(i=0; i<month-1;i++)
		temp+=day_month[i];
	temp += day;
	
	if(year%100==0&&year%400==0)
		if(month<=2)
			temp--;
	temp=temp%7;
	printf("%s\n", week[temp]);

    return 0;
}

   
