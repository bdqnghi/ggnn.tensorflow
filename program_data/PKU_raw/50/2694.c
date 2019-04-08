
int date(int month);
int daycount(int month);


int main()
{
    int day=0;
    scanf("%d",&day);
	
	int remainder=0;
	if(day>5)
		remainder=12-day;
	if(day<5)
		remainder=5-day;
	int month=1;
	for(;month<=12;month++)
	{
		if(daycount(month)%7==remainder)
			printf("%d\n",month);
	}


	
	return 0;
}

int date(int month)
{
	switch(month)
	{
	   case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	    	return 31;
		    break;
	   case 2:
	    	return 28;
		    break;
	   case 4: case 6: case 9: case 11:
	     	return 30;
		    break;
	}
}

int daycount(int month)
{
	if(month==1)
		return 12;
	int sum=12;
	int mon=1;
	for(;mon<month;mon++)
		sum+=date(mon);
	return sum;
}
