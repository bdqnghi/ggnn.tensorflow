int main()
{
	int year,month,day,date,a,b,c;
	scanf("%d%d%d",&year,&month,&day);
	a=(year-1)/4-(year-1)/100+(year-1)/400;
	if(year%4!=0)
	{
	  switch(month)
	  {
	  case 1:b=0;break;
	  case 2:b=31;break;
	  case 3:b=59;break;
	  case 4:b=90;break;
	  case 5:b=120;break;
      case 6:b=151;break;
	  case 7:b=181;break;
	  case 8:b=212;break;
	  case 9:b=243;break;
	  case 10:b=273;break;
	  case 11:b=304;break;
	  case 12:b=334;break;
	}}
	if(year%4==0)
	{
		if((year%100!=0)||(year%400==0))
		{
           switch(month)
		   {
	  case 1:b=0;break;
	  case 2:b=31;break;
	  case 3:b=60;break;
	  case 4:b=91;break;
	  case 5:b=121;break;
      case 6:b=152;break;
	  case 7:b=182;break;
	  case 8:b=213;break;
	  case 9:b=244;break;
	  case 10:b=274;break;
	  case 11:b=305;break;
	  case 12:b=335;break;
		}}
	  if(year%100==0&&year%400!=0)
	  {
		  switch(month)
	  {
	  case 1:b=0;break;
	  case 2:b=31;break;
	  case 3:b=59;break;
	  case 4:b=90;break;
	  case 5:b=120;break;
      case 6:b=151;break;
	  case 7:b=181;break;
	  case 8:b=212;break;
	  case 9:b=243;break;
	  case 10:b=273;break;
	  case 11:b=304;break;
	  case 12:b=334;break;
	  }
	}}
	c=b+day+((year-1)%7)*365+a;
	date=c%7;
	switch(date)
	{
	case 0:printf("Sun.");break;
	case 1:printf("Mon.");break;
	case 2:printf("Tue.");break;
	case 3:printf("Wed.");break;
	case 4:printf("Thu.");break;
	case 5:printf("Fri.");break;
	case 6:printf("Sat.");break;
	}
	return 0;
}
