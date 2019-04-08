int main()
{
	int year,leapnum;
	short month,day,mod;
	char now;
	scanf("%d%hd%hd",&year,&month,&day);
	now=(year%400==0)||(year%4==0)&&(year%100!=0)?'T':'F';
	leapnum=year/4-year/100+year/400;
	if(now=='T')	leapnum--;
	leapnum%=7;
	mod=(year-1)%7;
	mod+=leapnum;
	switch(month)
	{
	case 12:mod+=30;
	case 11:mod+=31;
	case 10:mod+=30;
	case  9:mod+=31;
	case  8:mod+=31;
	case  7:mod+=30;
	case  6:mod+=31;
	case  5:mod+=30;
	case  4:mod+=31;
	case  3:mod+=28;
	case  2:mod+=31;
	case  1:	;
	}
	if(now=='T'&&month>2)	mod++;
	mod+=day;
	switch(mod%7)
	{
	case 1:printf("Mon.\n");	break;
	case 2:printf("Tue.\n");	break;
	case 3:printf("Wed.\n");	break;
	case 4:printf("Thu.\n");	break;
	case 5:printf("Fri.\n");	break;
	case 6:printf("Sat.\n");	break;
	case 0:printf("Sun.\n");
	}
	return(0);
}



