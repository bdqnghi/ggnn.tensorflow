int main()
{
	int leapyearjudgement(int YEAR);
	int daycounting(int month,int date,int LEAPYEAR);
	int sy,sm,sd,ey,em,ed;
	scanf("%d %d %d\n%d %d %d",&sy,&sm,&sd,&ey,&em,&ed);
	int year,countleapyear;
    countleapyear=0;
	for (year=sy;year<ey;year++)
		if ((year%4==0&&year%100!=0)||year%400==0) countleapyear++;
	int d1,d2;//d1???????????,??????????????2??????????
	d1=(ey-sy)*365+countleapyear;
	
	int daystart,dayend,leapyearstart,leapyearend;
	leapyearstart=leapyearjudgement(sy);
	daystart=daycounting(sm,sd,leapyearstart);
	leapyearend=leapyearjudgement(ey);
	dayend=daycounting(em,ed,leapyearend);
	
	d2=dayend-daystart;
	
	int DAY;
	DAY=d1+d2;
	printf("%d",DAY);
    return 0;
}

int leapyearjudgement(int YEAR)//?????
{
	int judge;//??????????1???0
	judge=0;
	if ((YEAR%4==0&&YEAR%100!=0)||YEAR%400==0) judge=1;
	return (judge);
}

int daycounting(int month,int date,int LEAPYEAR)//?????
{   int day;
	if (LEAPYEAR=1)
	{switch (month)
	{
	  case 1:day=date;break;
	  case 2:day=31+date;break;
	  case 3:day=60+date;break;
	  case 4:day=91+date;break;
	  case 5:day=121+date;break;
	  case 6:day=152+date;break;
	  case 7:day=182+date;break;
	  case 8:day=213+date;break;
	  case 9:day=244+date;break;
	  case 10:day=274+date;break;
	  case 11:day=305+date;break;
	  case 12:day=335+date;
	}
	}
	else 
	{switch (month)
	{
	  case 1:day=date;break;
	  case 2:day=31+date;break;
	  case 3:day=60-1+date;break;
	  case 4:day=91-1+date;break;
	  case 5:day=121-1+date;break;
	  case 6:day=152-1+date;break;
	  case 7:day=182-1+date;break;
	  case 8:day=213-1+date;break;
	  case 9:day=244-1+date;break;
	  case 10:day=274-1+date;break;
	  case 11:day=305-1+date;break;
	  case 12:day=335-1+date;
	}
	}
	return (day);
}