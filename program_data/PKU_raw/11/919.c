
void main()
{
	int year,mounth,day,count=0,t=0;
	scanf("%d%d%d",&year,&mounth,&day);
	if(year%400==0||(year%4==0&&year%100!=0))
	{
		count=1;
	}
	else count=0;
	if(count==1)
	{
		switch(mounth)
		{
		case 1: t=day; break;
		case 2: t=31+day; break;
		case 3: t=60+day;break;
		case 4: t=91+day;break;
		case 5: t=121+day;break;
		case 6: t=152+day;break;
		case 7: t=182+day;break;
		case 8: t=213+day;break;
		case 9: t=244+day;break;
		case 10: t=274+day;break;
		case 11: t=305+day;break;
		case 12: t=335+day;break;

		}
	}
	if(count==0)
	{
		switch(mounth)
		{
		case 1: t=day; break;
		case 2: t=31+day; break;
		case 3: t=59+day;break;
		case 4: t=90+day;break;
		case 5: t=120+day;break;
		case 6: t=151+day;break;
		case 7: t=181+day;break;
		case 8: t=212+day;break;
		case 9: t=243+day;break;
		case 10: t=273+day;break;
		case 11: t=304+day;break;
		case 12: t=334+day;break;
		}
	}
	printf("%d",t);

}
