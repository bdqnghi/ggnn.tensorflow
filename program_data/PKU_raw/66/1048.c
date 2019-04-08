int main()
{
	long y,m,d,w,a,b;
	scanf("%d%d%d",&y,&m,&d);

	if((y%4==0&&y%100!=0)||y%400==0)b=1;
	else b=0;
	
	switch(m)
	{
	   case 1:a=0;
	   break;
	   case 2:a=31;
	   break;
	   case 3:a=59+b;
	   break;
	   case 4:a=90+b;
	   break;
	   case 5:a=120+b;
	   break;
	   case 6:a=151+b;
	   break;
	   case 7:a=181+b;
	   break;
	   case 8:a=212+b;
	   break;
	   case 9:a=243+b;
	   break;
	   case 10:a=273+b;
	   break;
	   case 11:a=304+b;
	   break;
	   case 12:a=334+b;
	   break;	
	   default:;
	}
	
	w=y-1+(y-1)/4-(y-1)/100+(y-1)/400+a+d;
	switch(w%7)
	{
		case 0:printf("Sun.");
		break;
		case 1:printf("Mon.");
		break;
		case 2:printf("Tue.");
		break;
		case 3:printf("Wen.");
		break;
		case 4:printf("Thu.");
		break;
		case 5:printf("Fri.");
		break;
		case 6:printf("Sat.");
		break;
	}
	
	return 0;
}