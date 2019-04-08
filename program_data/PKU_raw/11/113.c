
int main(int argc, char* argv[])
{
	int year,month,day,total,i;
	scanf("%d%d%d",&year,&month,&day);
	total=0;
	for(i=0;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		{
			total=total+31;
		}
		if(i==4||i==6||i==9||i==11)
		{
			total=total+30;
		}
		if(i==2)
		{
	       if((year%4==0&&year%100!=0)||year%400==0)
			   total=total+29;
		   else total=total+28;
		}
	}
	total=total+day;
	printf("%d",total);
	return 0;
}