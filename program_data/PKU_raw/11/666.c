int main()
{
	int year,month,day,days;
	scanf("%d%d%d",&year,&month,&day);
	if(month==1) days=day;
	else if(month==2) days=day+31;
	else if(month==3) days=day+59;
	else if(month==4) days=day+90;
	else if(month==5) days=day+120;
	else if(month==6) days=day+151;
	else if(month==7) days=day+181;
	else if(month==8) days=day+212;
	else if(month==9) days=day+243;
	else if(month==10) days=day+273;
	else if(month==11) days=day+304;
	else if(month==12) days=day+334;
	if(year%100==0,year%400!=0) printf("%d",days);
	else if(year%100!=0,year%4!=0) printf("%d",days);
    else if(year%100!=0,year%4==0)
	{
		if(month>=1,month<=2) printf("%d",days);
		else if(month>2,month<=12) printf("%d",days+1);
	}
	else if(year%400==0)
	{ 
		if(month>=1,month<=2) printf("%d",days);
		else if(month>2,month<=12) printf("%d",days+1);
	}
}