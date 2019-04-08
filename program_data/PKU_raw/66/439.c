
int d(int day1)
{
	day1=day1%7;
	if(day1==0)
		day1=7;
	return(day1);
}

int firstday(int year)
{
	int m,n,y,x;
	if((year%400)==0)
	{
		x=6;
	}
	else
	{
		year=year%400;
		m=year%100;
		m=(year-m)/100;
		if((year%100)==0)
			x=d((5*m));
		else
		{
			year=year%100;
			y=year%4;
			n=(year-y)/4;
			if(y==0)
				x=d((m+n)*5-1);
			else
				x=d((m+n)*5+y);
		}
	}
	return(x);
}

int weekday(int x,int month,int day)
{
	int j;
	j=day%7;
	if(month==1)
	{
		x=d(x+2);
		x=d(x+j-1);
	}
	else if(month==2)
	{
		x=d(x+3);
		x=d(x+j-1);
	}
	else if(month==3)
	{
		x=d(x+3);
		x=d(x+j-1);
	}
	else if(month==4)
	{
		x=d(x+6);
		x=d(x+j-1);
	}
	else if(month==5)
	{
		x=d(x+1);
		x=d(x+j-1);
	}
	else if(month==6)
	{
		x=d(x+4);
		x=d(x+j-1);
	}
	else if(month==7)
	{
		x=d(x+6);
		x=d(x+j-1);
	}
	else if(month==8)
	{
		x=d(x+2);
		x=d(x+j-1);
	}
	else if(month==9)
	{
		x=d(x+5);
		x=d(x+j-1);
	}
	else if(month==10)
	{
		x=x;
		x=d(x+j-1);
	}
	else if(month==11)
	{
		x=d(x+3);
		x=d(x+j-1);
	}
	else
	{
		x=d(x+5);
		x=d(x+j-1);
	}
	return(x);
}

void main()
{
	char c[4]={0};
	int t,w,year,month,day,x;
	scanf("%d%d%d",&year,&month,&day);
	if((year%400)==0)
		t=0;
	else if((year%100)==0)
		t=0;
	else if((year%4)==0)
		t=1;
	else
		t=0;
	x=firstday(year);
	x=x+t;
    w=weekday(x,month,day);
	if(w==1)
	{
		strcpy(c,"Mon");
	}
	else if(w==2)
	{
		strcpy(c,"Tue");
	}
	else if(w==3)
	{
		strcpy(c,"Wed");
	}
	else if(w==4)
	{
		strcpy(c,"Thu");
	}
	else if(w==5)
	{
		strcpy(c,"Fri");
	}
	else if(w==6)
	{
		strcpy(c,"Sat");
	}
	else if(w==7)
	{
		strcpy(c,"Sun");
	}
	printf("%s.\n",c);
}