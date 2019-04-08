int main()
{
	int year,month,day;
	scanf("%d%d%d",&year,&month,&day);
	int j;
	int zong=0;
	int xingqi;
	int i;
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			zong+=31;
		if(i==4||i==6||i==9||i==11)
			zong+=30;
		if(i==2)
		{
            if(year%400==0||(year%4==0&&year%100!=0))
			    zong+=29;
	    	else
			    zong+=28;
		}
	}
	zong=zong+day;
    zong+=(year-1)+(year-1)/4-(year-1)/100+(year-1)/400;
	xingqi=zong%7;
	if(xingqi==1)
		printf("Mon.");
    if(xingqi==2)
		printf("Tue.");
    if(xingqi==3)
		printf("Wed.");
    if(xingqi==4)
		printf("Thu.");
    if(xingqi==5)
		printf("Fri.");
    if(xingqi==6)
		printf("Sat.");
	if(xingqi==0)
		printf("Sun.");
	return 0;
}