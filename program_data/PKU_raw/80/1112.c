int Inyear(int month,int day,int year,int i,int output)
{
	for(i=1;i<month;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			output+=31;
		else if(i==4||i==6||i==9||i==11)
			output+=30;
		else if(i==2&&((year%4==0&&year%100!=0)||(year%400==0)))
			output+=29;
		else
			output+=28;
	}
	output+=day;
	return output;
}

int main()
{
	int year[2],month[2],day[2],output=0,inyear,i;
	scanf("%d%d%d%d%d%d",&year[0],&month[0],&day[0],&year[1],&month[1],&day[1]);
	output=Inyear(month[1],day[1],year[1],i,inyear)-Inyear(month[0],day[0],year[0],i,inyear);
	for(i=year[0];i<year[1];i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
			output+=366;
		else 
			output+=365;
	}
	printf("%d",output);
	return 0;
}
