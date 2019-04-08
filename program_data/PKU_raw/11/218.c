int main()
{
	int year,month,day,a,all,m1[5],m2[5],m3[5],i;
	for(i=0;i<=4;i++)
	scanf("%d%d%d",&m1[i],&m2[i],&m3[i]);
	for(i=0;i<=4;i++)
	{
		year=m1[i];month=m2[i];day=m3[i];
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
		switch(month)
		{
		case 1:a=366;break;
		case 2:a=335;break;
		case 3:a=306;break;
		case 4:a=275;break;
		case 5:a=245;break;
		case 6:a=214;break;
		case 7:a=184;break;
		case 8:a=153;break;
		case 9:a=122;break;
		case 10:a=92;break;
		case 11:a=61;break;
		case 12:a=31;break;
		}
		all=366-a+day;
		
	}
	else
	{
		switch(month)
		{
		case 1:a=365;break;
		case 2:a=334;break;
		case 3:a=306;break;
		case 4:a=275;break;
		case 5:a=245;break;
		case 6:a=214;break;
		case 7:a=184;break;
		case 8:a=153;break;
		case 9:a=122;break;
		case 10:a=92;break;
		case 11:a=61;break;
		case 12:a=31;break;
		}
		all=365-a+day;
		
	}
	printf("%d\n",all);
	}
	return 0;
}
