
void main()
{
	int year,month,day,num=0;
	scanf("%d%d%d",&year,&month,&day);
	if(year%4!=0 || (year%100==0 && year/400!=0) )
	{
		switch(month-1)
		{
			case 11:num+=30;
			case 10:num+=31;
			case 9:num+=30;
			case 8:num+=31;
			case 7:num+=31;
			case 6:num+=30;
			case 5:num+=31;
			case 4:num+=30;
			case 3:num+=31;
			case 2:num+=28;
			case 1:num+=31;
			case 0:;break;
		}
		num+=day;
	}
	else
	{
		switch(month-1)
		{
			case 11:num+=30;
			case 10:num+=31;
			case 9:num+=30;
			case 8:num+=31;
			case 7:num+=31;
			case 6:num+=30;
			case 5:num+=31;
			case 4:num+=30;
			case 3:num+=31;
			case 2:num+=29;
			case 1:num+=31;
			case 0:;break;
		}
		num+=day;
	}
	printf("%d\n",num);
}