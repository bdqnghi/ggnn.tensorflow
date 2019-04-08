int main()
{
	int year,month,day,i,y=0,days,w;
	scanf("%d%d%d",&year,&month,&days);
	for(i=1;i<month;i++){
       if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
		   day=31;
	   else
		   if(i==4||i==6||i==9||i==11)
			   day=30;
		   else
			   if(i==2){
			   if(year%4==0&&year%100!=0||year%400==0)
				   day=29;
			   else
				   day=28;
			   }
       y=y+day;
	   }
	w=y+days;
	printf("%d\n",w);
	return 0;
}
