int main()                                
{
	int year,month,day,total;
	int n,m,l,a,b;
	scanf("%d%d%d",&year,&month,&day);
	n=year-1;
	total=n;
	l=(year-1)/4;
	b=(year-1)/100;
	a=(year-1)/400;
	total=total+l-b+a;
	for(m=1;m<month;m++)
	{
		if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
			total+=3;
		else if((m==4)||(m==6)||(m==9)||(m==11))
			total+=2;
		if(m==2)
		{
			if((year%400==0)||(year%4==0)&&(year%100!=0))
				total=total+1;
			else total=total+0;
		}
	}
    total=total+day;
	if(total%7==1)
		printf("Mon.");
	else if(total%7==2)
		printf("Tue.");
	else if(total%7==3)
		printf("Wed.");
	else if(total%7==4)
		printf("Thu.");
	else if(total%7==5)
		printf("Fri.");
	else if(total%7==6)
		printf("Sat.");
	else if(total%7==0)
		printf("Sun.");
  return 0;
}                     
                     
