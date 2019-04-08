int main()
{
	int year,k,day;
	int i,a,b,c=0,j,s,t,month,y=0;
	scanf("%d %d %d",&year,&k,&day);
	a=year%400;
	if(a==0)
		a=400;
	if(a%400==0||(a%4==0&&a%100!=0))
		j=1;
	else
		j=0;
	
	for(i=0;i<a;i++)
	{
        if(i%400==0||(i%4==0&&i%100!=0))
			c++;
	}
	for(month=0;month<k;month++)
	{
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
		    b=31;
		}
	    else if(month==4||month==6||month==9||month==11)
		{
		    b=30;
		}
	    else if(month==2&&j==1)
		{
		    b=29;
		}
	    else if(month==2&&j==0)
		{
		    b=28;
		}
		else 
		{
			b=0;
		}
		y+=b;

	}
		
	s=(a-c)*365+(c-1)*366+y+day;
	t=s%7;
	if(t==0)
		printf("Sun.");
    else if(t==1)
		printf("Mon.");
    else if(t==2)
		printf("Tue.");
    else if(t==3)
		printf("Wed.");
    else if(t==4)
		printf("Thu.");
    else if(t==5)
		printf("Fri.");
    else 
		printf("Sat.");
	return 0;
}


	
		
