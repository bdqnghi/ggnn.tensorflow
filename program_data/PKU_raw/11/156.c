int main()
{
	int Year,Month,Date;
	int month;
	int i;
	int sum1=0,sum2=0;
	scanf("%d %d %d",&Year,&Month,&Date);
	month=Month-1;
	if(Year%4==0&&Year%400==0){
	   int mday[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	   for(i=0;i<month;i++)
		   sum1=sum1+mday[i];
	}
	else
	{
		int mday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	    for(i=0;i<month;i++)
		   sum1=sum1+mday[i];
	}
	sum2=sum1+Date;
	printf("\n%d",sum2);
	return 0;
}

