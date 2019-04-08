int main()
{
	long year1,month1,day1,year2,month2,day2,len1=0,len2=0;
	scanf("%d %d %d %d %d %d",&year1,&month1
	,&day1,&year2,&month2,&day2);
	long year,i,c;
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(year=0;year<year1;year++)
	{
		if(year%4==0&&year%100!=0||(year%400==0))
		len1+=366;
		else len1+=365;
     }
     for(year=0;year<year2;year++)
	{
		if(year%4==0&&year%100!=0||(year%400==0))
		len2+=366;
		else len2+=365;
    }
    for(i=0;i<month1;i++) len1+=month[i];
    for(i=0;i<month2;i++) len2+=month[i];
    if((year1%4==0&&year1%100!=0||(year1%400==0))&&(month1>2))
     len1+=1;
	 if((year2%4==0&&year2%100!=0||(year2%400==0))&&(month2>2))                                                         
    len2+=1;
    len1+=day1;
    len2+=day2;
    c=len2-len1;
    printf("%d",c);
    
 }