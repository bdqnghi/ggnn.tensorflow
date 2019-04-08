void main()
{
	long int year;
	int month,day;
	long int sum;
	scanf("%ld%d%d",&year,&month,&day);
		if(month==1)
			sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+day;
		else if(month==2)
			sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+31+day;
		else
		{
		if(year%400==0||((year%4==0)&&(year%100!=0)))
		{
			if(month==3)
            sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+60+day;
			else if(month==4)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+91+day;
			else if(month==5)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+121+day;
			else if(month==6)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+152+day;
			else if(month==7)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+182+day;
            else if(month==8)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+213+day;
            else if(month==9)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+244+day;
            else if(month==10)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+274+day;
            else if(month==11)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+305+day;
            else if(month==12)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+335+day;
		}
		else
		{
			if(month==3)
            sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+59+day;
			else if(month==4)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+90+day;
			else if(month==5)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+120+day;
			else if(month==6)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+151+day;
			else if(month==7)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+181+day;
            else if(month==8)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+212+day;
            else if(month==9)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+243+day;
            else if(month==10)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+273+day;
            else if(month==11)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+304+day;
            else if(month==12)
				sum=365*((year-1)%7)+((year-1)/4+(year-1)/400-(year-1)/100)+334+day;
		}
		}
		if(sum%7==0)
			printf("Sun.\n");
		else if(sum%7==1)
			printf("Mon.\n");
		else if(sum%7==2)
			printf("Tue.\n");
	    else if(sum%7==3)
			printf("Wed.\n");
	    else if(sum%7==4)
			printf("Thu.\n");
	    else if(sum%7==5)
			printf("Fri.\n");
	    else if(sum%7==6)
			printf("Sat.\n");
}