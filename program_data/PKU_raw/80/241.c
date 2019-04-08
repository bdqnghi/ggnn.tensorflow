
int main (){
int year1,month1,day1,year2,month2,day2;
int total=0;
scanf("%d %d %d",&year1,&month1,&day1);
scanf("%d %d %d",&year2,&month2,&day2);
while((year1!=year2)||(month1!=month2)||(day1!=day2)){
	if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10){
		if(day1<31){
		day1++;
		total++;
		}else if(day1==31){
		day1=0;
		month1++;
		}
	}
	if(month1==4||month1==6||month1==9||month1==11){
		if(day1<30){
		day1++;
		total++;
		}else if(day1==30){
		day1=0;
		month1++;
		}
    }
	if(month1==2){
		if((year1%4==0&&year1%100!=0)||(year1%400==0)){
		if(day1<29){
		day1++;
		total++;
		}else if(day1==29){
		day1=0;
		month1++;
		} 
		}else{
		if(day1<28){
		day1++;
		total++;
		}else if(day1==28){
		day1=0;
		month1++;
		}
		}
	}
   if(month1==12){
		if(day1<31){
		day1++;
		total++;
		}else if(day1==31){
		day1=0;
		month1=1;
		year1++;
		}
   }
}
printf("%d",total);
return 0;
}
