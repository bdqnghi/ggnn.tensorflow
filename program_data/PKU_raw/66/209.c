
int main()
{
    int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int i;int m=0;

    year=year%400 +400;

	m=year-1;
    for(i=1;i<year;i++)
	{if(i%400==0||i%4==0&&i%100!=0)m++;
	}
	
	int days;
	switch(month)
	{
	case 1:days=day;break;
	case 2:days=31+day;break;
    case 3:days=31+28+day;break;
	case 4:days=31+28+31+day;break;
    case 5:days=31+28+31+30+day;break;
    case 6:days=31+28+31+30+31+day;break;
	case 7:days=31+28+31+30+31+30+day;break;
	case 8:days=31+28+31+30+31+30+31+day;break;
	case 9:days=31+28+31+30+31+30+31+31+day;break;
	case 10:days=31+28+31+30+31+30+31+31+30+day;break;
	case 11:days=31+28+31+30+31+30+31+31+30+31+day;break;
	case 12:days=31+28+31+30+31+30+31+31+30+31+30+day;break;

	}
	if((year%400==0||year%4==0&&year%100!=0)&&(month>2))days+=1;
	m+=days%7;
	m=m%7;
	char s[5];
	switch(m)
	{
    case 1:strcpy(s,"Mon.");break;
	case 2:strcpy(s,"Tue.");break;
    case 3:strcpy(s,"Wed.");break;
	case 4:strcpy(s,"Thu.");break;
    case 5:strcpy(s,"Fri.");break;
    case 6:strcpy(s,"Sat.");break;
	case 0:strcpy(s,"Sun.");break;
	}
	printf("%s",s);


	return 0;
}
