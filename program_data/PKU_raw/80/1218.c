int calday(int year,int month,int day);
int main()

{
	int syear,smonth,sday,eyear,emonth,eday,tday1,tday2;
	scanf("%d %d %d",&syear,&smonth,&sday);
	scanf("%d %d %d",&eyear,&emonth,&eday);
	tday1=calday(syear,smonth,sday);
	tday2=calday(eyear,emonth,eday);
	printf("%d\n",tday2-tday1);
	return 0;
}

int calday(int year,int month,int day){
	int total=0, y, m, Feb;
	for(y=0;y<year;y++){
		Feb=((y%4==0&&y%100!=0)||(y%400==0))?29:28;
		for(m=0;m<=12;m++){
			if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
				total+=31;
			}
			if(m==2){
				total+=Feb;
			}
			if(m==4||m==6||m==9||m==11){
				total+=30;
			}
		}
	}
	if(y==year){
		Feb=((y%4==0&&y%100!=0)||(y%400==0))?29:28;
		for(m=0;m<month;m++){
			if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
				total+=31;
			}
			if(m==2){
				total+=Feb;
			}
			if(m==4||m==6||m==9||m==11){
				total+=30;
			}
		}
		if(m==month){
			total+=day;
		}
	}
	return total;
}