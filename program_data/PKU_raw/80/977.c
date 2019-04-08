int DiJiTian(int year,  int month,  int day);
int isRunNian(int   year);
void swap(int *a,  int *b);
int main()
{
	int a,b,c,i;
	int  year1,  month1,  day1;
	int  year2,  month2,  day2;
	int  result = 0;

	scanf( "%d %d %d",  &year1,  &month1,  &day1);
	scanf( "%d %d %d",  &year2,  &month2,  &day2);
	
	if(year1==year2)
	{
		result = DiJiTian(year1, month1, day1) - DiJiTian(year2, month2, day2);
        if(result < 0)	
			result = 0 - result;
	}
	else
	{
		if(year1 > year2)
		{
	        swap(&year1, &year2);
	        swap(&month1, &month2);
          	swap(&day1, &day2);
		}
		if( isRunNian(year1) )
	        a = 366 - DiJiTian(year1, month1, day1);
        else
        	a = 365 - DiJiTian(year1, month1, day1);
		b = 0;
        for( i = year1 + 1; i < year2; i++){
        	if(isRunNian(i))
	        	b += 366;
        	else
        		b += 365;
		}
		c = DiJiTian(year2, month2, day2);
		result=a+b+c;
	}
	printf("%d",result);
	return 0;
}
int isRunNian(int year){
	int result;
	if( year%400 == 0 ||(year%4==0 && year%100!=0) )
		result = 1;
	else
		result = 0;
	return   result;	
}
int DiJiTian(int year, int month, int day)
{
        int  result = 0,  i;
        for( i = 1;  i < month;  i++){ 	//step1
	if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
	        result += 31;	
	 else  if (i == 4 || i ==6 || i == 9 || i==11)
  	        result += 30;
	else   if(i == 2){
	        if( isRunNian(year) ) 
		result += 29;
	        else
		result += 28;
	}
       }
       result += day;         //step2
       return  result;	
}
void swap(int *a, int *b)
{
	int e;
	e = *a;
	*a = *b;
	*b = e; 
}

