int isRunNian(int year)
{
	int result;
    if(year%400==0||(year%4==0&&year%100!=0))
    result=1;
    else
	{
		result=0;
	}
return result;
}


int Judge(int year,int month,int day)
{
	int result=0;
	if(year%400!=0)
	{
		year=year%400;
	}else
	{
		year=400;
	}
	for(int i = 1; i < month; i++)
	{ 
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			result += 3;	
		} else if (i == 4 || i ==6 || i == 9 || i==11)			
		{
			result += 2;
		} else if(i == 2)			
		{
			if(isRunNian(year))
			{
				result+=1;
			}			
		}
	}
	result+=day%7;
	for(int j=1;j<year;j++)
	{
		if(isRunNian(j))
		{
			result+=1;
		}
	}
	result=(result+year-1)%7;
	return result;	
}


int main()
{
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
    if(Judge(year,month,day)==1)
		printf("Mon.");
	if(Judge(year,month,day)==2)
		printf("Tue.");
	if(Judge(year,month,day)==3)
		printf("Wed.");
    if(Judge(year,month,day)==4)
		printf("Thu.");
    if(Judge(year,month,day)==5)
		printf("Fri.");
	if(Judge(year,month,day)==6)
		printf("Sat.");
	if(Judge(year,month,day)==0)
		printf("Sun.");
	return 0;
}