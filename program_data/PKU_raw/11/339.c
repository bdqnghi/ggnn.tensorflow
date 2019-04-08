
int main()
{
	int year,month,day,number;
	scanf("%d%d%d",&year,&month,&day);
	if (month==1)
		number=day;
	else if (month==2)
		number=31+day;
	else
	{
		if ((year%4==0&&year%100!=0)||year%400==0)
		{
			if (month==3)
				number=60+day;
			else if (month==4)
				number=91+day;
			else if (month==5)
				number=day+121;
			else if (month==6)
				number=day+152;
			else if (month==7)
				number=day+182;
			else if (month==8)
				number=day+213;
			else if (month==9)
				number=day+244;
			else if (month==10)
				number=day+274;
			else if (month==11)
				number=day+305;
			else if (month==12)
				number=day+335;
		}
		else
		{
			if (month==3)
				number=59+day;
			else if (month==4)
				number=90+day;
			else if (month==5)
				number=day+120;
			else if (month==6)
				number=day+151;
			else if (month==7)
				number=day+181;
			else if (month==8)
				number=day+212;
			else if (month==9)
				number=day+243;
			else if (month==10)
				number=day+273;
			else if (month==11)
				number=day+304;
			else if (month==12)
				number=day+334;
		}
	}
	printf("%d\n",number);
	return 0;
}