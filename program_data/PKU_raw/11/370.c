
int main(int argc, char* argv[])
{
	int year, month, day, x;
	scanf("%d%d%d",&year,&month,&day);
	if((year%4==0&&year%100!=0)||(year%400==0))
	{	
		if (month==1)
	    x=day;
	else if(month==2)
		x=31+day;
	else if(month==3) 
		x=31+29+day;
	else if (month==4)
		x=31+29+31+day;
	else if(month==5)
		x=31+29+31+30+day;
	else if(month==6)
		x=31+29+31+30+31+day;
	else if (month==7)
		x=31+29+31+30+31+30+day;
	else if (month==8)
		x=31+29+31+30+31+30+31+day;
	else if(month==9)
		x=31+29+31+30+31+30+31+31+day;
	else if (month==10)
		x=31+29+31+30+31+31+30+31+30+day;
	else if(month==11)
		x=31+29+31+30+31+30+31+31+30+31+day;
	else if(month==12)
		x=31+29+30+30+31+30+31+31+30+31+30+day;
	}
	else 
	{	
		if (month==1)
	    x=day;
	else if(month==2)
		x=31+day;
	else if(month==3) 
		x=31+28+day;
	else if (month==4)
		x=31+28+31+day;
	else if(month==5)
		x=31+28+31+30+day;
	else if(month==6)
		x=31+28+31+30+31+day;
	else if (month==7)
		x=31+28+31+30+31+30+day;
	else if (month==8)
		x=31+28+31+30+31+30+31+day;
	else if(month==9)
		x=31+28+31+30+31+30+31+31+day;
	else if (month==10)
		x=31+28+31+30+31+31+30+31+30+day;
	else if(month==11)
		x=31+28+31+30+31+30+31+31+30+31+day;
	else if(month==12)
		x=31+28+30+30+31+30+31+31+30+31+30+day;
	}

	printf("%d\n",x);
    return 0;
}

