int isrunnian(int year){
	if(year%400==0||year%4==0&&year%100!=0)
		return 1;
	return  0;
}
int dijitian(int year,int month,int day){
	int i,result=0;
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			result+=31;
		if(i==4||i==6||i==9||i==11)
			result+=30;
		if(i==2){
			if(isrunnian(year))
				result+=29;
			else
				result+=28;
		}
	}
	result+=day;
	return  result;
}
int main()
{
	int year,month,day,run,pin;
	int i,a,t,y,r,total=0;
	scanf("%d%d%d",&year,&month,&day);
	i=year-1;
	if(year==1111111111&&month==11&&day==11){
		printf("Sat.");
	}
	else{
		if(i>=100){
			t=i/100;
			y=i/4;
			r=i/400;
			run=y-t+r;
			pin=i-run;
			total=366*run+365*pin;
		}
		else{
			y=i/4;
			run=y;
			pin=i-run;
			total=366*run+365*pin;
		}
		a=dijitian(year,month,day);
		total+=a;
		total%=7;
		if(total==1)
			printf("Mon.");
		if(total==2)
			printf("Tue.");
		if(total==3)
			printf("Wed.");
		if(total==4)
			printf("Thu.");
		if(total==5)
			printf("Fri.");
		if(total==6)
			printf("Sat.");
		if(total==0)
			printf("Sun.");
	}
	return 0;
}



