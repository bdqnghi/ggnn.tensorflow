int main()
{
	int year,mon,day,a;
	scanf("%d%d%d",&year,&mon,&day);
	if(mon==1)
	{
		a=day;
	}
	else if(mon==2)
	{
		a=31+day;
	}
	else if(mon>2)
	{
		if(mon==3)
		{
			a=31+29+day;
		}
		else if(mon==4)
		{
			a=31+29+31+day;
		}
		else if(mon==5)
		{
			a=31+29+31+30+day;
		}
		else if(mon==6)
		{
			a=31+29+31+30+31+day;
		}
		else if(mon==7)
		{
			a=31+29+31+30+31+30+day;
		}
		else if(mon==8)
		{
			a=31+29+31+30+31+30+31+day;
		}
		else if(mon==9)
		{
			a=31+29+31+30+31+30+31+31+day;
		}
		else if(mon==10)
		{
			a=31+29+31+30+31+30+31+31+30+day;
		}
		else if(mon==11)
		{
			a=31+29+31+30+31+30+31+31+30+31+day;
		}
		else if(mon==12)
		{
			a=31+29+31+30+31+30+31+31+30+31+30+day;
		}
		if(year%400==0||year%100!=0&&year%4==0)
			a=a;
		else a=a-1;
	}
	printf("%d",a);
	return 0;
}
