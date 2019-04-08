int main(int argc, char* argv[])
{
	int i,a;
	int year,month,day;
	scanf("%d %d %d",&year,&month,&day);
	a=(year-1)%400;
	int total1=0,total2=0,total3=0,total=0;
	for(i=1;i<=a;i++)
	{
		total1=(total1+1)%7;
		if(((i%4==0)&&(i%100!=0))||(i%400==0))
		{
			total1=total1+1;
		}
	}
	int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=1;i<month;i++)
	{
		total2=total2+mth[i-1];
	}
	if((year%4==0&&year%100!=0)||((year%400==0)&&(month>2)))
	{
	    total2=total2+1;
	}
	total3=day;
	total=total1+total2+total3;
	switch(total%7){
	case 1:printf("Mon.\n");break;
	case 2:printf("Tue.\n");break;
	case 3:printf("Wed.\n");break;
	case 4:printf("Thu.\n");break;
	case 5:printf("Fri.\n");break;
	case 6:printf("Sat.\n");break;
	case 0:printf("Sun.\n");break;
	}
	return 0;
}

