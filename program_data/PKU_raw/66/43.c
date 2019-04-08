int main()
{
	int year, month, day, total, i;
    int mday[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d%d%d", &year, &month, &day);
    total = 0;
    for( i=1; i<month; i++)
	{
    total = total + mday[i-1];
	}
    if( ((year%4==0&&year%100!=0) || year%400==0 )&&month>2)
              total = total + 1;
    total = total + day;
    int b;
	if(year%400!=0) b=year%400;
	else { b=400;}
    int a,n,n1,n2;
	for(n1=0,a=1;a<b;a++)
	{
		if((a%4==0&&a%100!=0) || a%400==0 )
			n1++;
	}
    n2=(b-1)-n1;
	n=365*n2+366*n1;
	total=total+n;
	if(total%7==0)printf("Sun.");
	else if(total%7==1)printf("Mon.");
    else if(total%7==2)printf("Tue.");
    else if(total%7==3)printf("Wed.");
    else if(total%7==4)printf("Thu.");
    else if(total%7==5)printf("Fri.");
    else printf("Sat.");
	return 0;
}