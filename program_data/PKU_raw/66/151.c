int main()
{
    unsigned long year,month,day,i=1,s=0,a=0,n;
    int m[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d %d %d",&year,&month,&day);	
	if ((year%4==0 && year % 100 !=0 ) || year % 400 == 0)  
		m[2]=29; else m[2]=28;
    while (i<month) 
	{
		s=s+m[i];
		i=i+1;
	}
	s=s+day;
	s=s%7;
	if (year<=400)
	{
	for (n=1;n<=year-1;n++)
	{
		if ((n%4==0 && n % 100 !=0 ) || n % 400 == 0) a=2;else a=1;
		s=s+a;
	}
	s=s%7;
	}
	else 
	{
	year=year%400+400;
	for (n=1;n<=year-1;n++)
	{
		if ((n%4==0 && n % 100 !=0 ) || n % 400 == 0) a=2;else a=1;
		s=s+a;
	}
	s=s%7;
	}
	switch(s)
	{
	case 0:printf ("Sun.");break;
	case 1:printf ("Mon.");break;
    case 2:printf ("Tue.");break;
    case 3:printf ("Wed.");break;
    case 4:printf ("Thu.");break;
    case 5:printf ("Fri.");break;
    case 6:printf ("Sat.");break;
	}
	
	return 0;
}