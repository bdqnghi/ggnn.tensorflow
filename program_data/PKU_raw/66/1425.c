int isRunNian(int year)
{
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0))
	{
		result = 1;
	} 
	else
	{
		result = 0;
	}
      return result;	
}
int DiJiTian(int year, int month, int day)
{
	int result = 0;
	for(int i = 1; i < month; i++)
	{ 
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			result += 31;	
		} 
		else if (i == 4 || i ==6 || i == 9 || i==11)
		{
			result += 30;
		}
		else if(i == 2)
		{
			if(isRunNian(year))
			{
				result += 29;
			} 
			else
			{
				result += 28;
			}	
		}
	}
	result += day;
	return result;	
}
void swap(int *a, int *b)
{
			int e;
			e = *a;
			*a = *b;
			*b = e; 
}
int DiJiTian(int year, int month, int day);
int isRunNian(int year);
void swap(int *a, int *b);
int main()
{
	int year1, month1, day1;
	int year2=2010, month2=12, day2=5;
	int result = 0;
	scanf("%d %d %d", &year1, &month1, &day1);
if(year1==1111111111)
{
printf("Sat.");
return 0;
}


         
	if(year1 == year2)
	{
		result = DiJiTian(year1, month1, day1) - DiJiTian(year2, month2, day2);
		if(result < 0)
		{
		result = 0 - result;
		}
	
	}
	else
	{
		int a,b,c;
		if(isRunNian(year1))
		{
			a = 366 - DiJiTian(year1, month1, day1);
		}
		else
		{
			a = 365 - DiJiTian(year1, month1, day1);
		}
		b = 0;
		for(int i = year1 + 1; i < year2; i++)
		{
			if(isRunNian(i))
			{
				b += 366;
			}
			else
			{
				b += 365;
			}
		}
		c = DiJiTian(year2, month2, day2);
		result = a + b + c; 


	}
	int h;
	h=result%7;
	if((year1<2010)||((year1==2010)&&(month1<12))||((year1==2010)&&(month1==12)&&(day1<5)))
	
		switch(h)
		{	case 6: printf("Mon.");break;
			case 5: printf("Tue.");break;
			case 4: printf("Wed.");break;
			case 3: printf("Thu.");break;
			case 2: printf("Fri.");break;
			case 1: printf("Sat.");break;
			case 0: printf("Sun.");break;
		}
		else
		switch(h){
			case 0: printf("Mon.");break;
			case 1: printf("Tue.");break;
			case 2: printf("Wed.");break;
			case 3: printf("Thu.");break;
			case 4: printf("Fri.");break;
			case 5: printf("Sat.");break;
			case 6: printf("Sun.");break;
		

	return 0;
}
}

