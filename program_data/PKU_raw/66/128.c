int main()
{
	unsigned long a,b,c,d;
	scanf("%lu%lu%lu",&a,&b,&c);
	unsigned long run;
	a-=1;
	run=a/400*97+a%400/100*24+a%400%100/4;
	a+=1;
    d=run*(366%7)+(a-1-run)*(365%7);
	if((a%4==0&&a%100!=0)||a%400==0)
	{  
		switch(b)
		{
		case 12:d+=30;
		case 11:d+=31;
		case 10:d+=30;
		case 9:d+=31;
		case 8:d+=31;
		case 7:d+=30;
		case 6:d+=31;
		case 5:d+=30;
		case 4:d+=31;
		case 3:d+=29;
		case 2:d+=31;
		case 1:d+=0;
		}
		d+=c;
	}
	else
	{  
		switch(b)
		{
		case 12:d+=30;
		case 11:d+=31;
		case 10:d+=30;
		case 9:d+=31;
		case 8:d+=31;
		case 7:d+=30;
		case 6:d+=31;
		case 5:d+=30;
		case 4:d+=31;
		case 3:d+=28;
		case 2:d+=31;
		case 1:d+=0;
		}
		d+=c;
	}

switch(d%7)
{
case 1: printf("Mon.");break;
case 2: printf("Tue.");break;
case 3: printf("Wed.");break;
case 4: printf("Thu.");break;
case 5: printf("Fri.");break;
case 6: printf("Sat.");break;
case 0: printf("Sun.");break;
}
return 0;
}

		
		
		
		
	
		
		
		
		
		
	


