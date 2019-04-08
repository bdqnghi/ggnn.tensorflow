int main()
{
	int day[2][12] = {{31,29 ,31,30 ,31 , 30 , 31 ,31 , 30 ,31 , 30 ,31},{31,28 ,31,30 ,31 , 30 , 31 ,31 , 30 ,31 , 30 ,31}};
	int year1 , year2 , month1 ,month2 ,day1, day2 , i , j , k , sum=0 , past= 0 , will= 0;
	cin >> year1 >> month1 >> day1 ;
	cin >> year2 >> month2 >> day2 ;
	if (year1 == year2)
	{
		if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0) )
		{	
			for (i = month1 ; i <=month2 ;i++)
				sum+= day[0][i-1] ;
			sum = sum - day1 - (day[0][month2-1] - day2 ) ;
			cout << sum ;
		}
		else
		{
			for (i = month1 ; i <=month2 ;i++)
				sum+= day[1][i-1] ;
			sum = sum - day1 - (day[1][month2-1] - day2 ) ;
			cout << sum ;
		}
	}
	else
	{
		for (i = year1 ; i < year2 ; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			{
				for (j = 0 ; j< 12 ; j++)
					sum+=day[0][j] ;
			}
			else
				for (j = 0 ; j < 12 ; j++)
					sum+=day[1][j] ;
		}
		if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
		{	
			for (i = 0 ; i < month1 ;i++)
				past+= day[0][i] ;
			past = past - (day[0][month1-1] - day1 ) ;
				sum = sum - past ;
		}
		else
		{
			for (i = 0 ; i < month1 ;i++)
				past+= day[1][i] ;
			past = past - (day[1][month1-1] - day1 ) ;
			sum = sum - past ;
		}
		if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
		{	for (i = 0 ; i < month2 ;i++)
				will+= day[0][i] ;
			will = will - (day[0][month2-1] - day2 ) ;
				sum = sum + will ;
			cout << sum ;
		}
		else
		{
			for (i = 0 ; i < month2 ;i++)
				will+= day[1][i] ;
			will = will - (day[0][month2-1] - day2 ) ;
			sum = sum + will ;
			cout << sum ;
		}
	}
	return 0 ;
}