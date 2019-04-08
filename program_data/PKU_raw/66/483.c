
int main(){
	int i,j,a,year,month,day,days=0;
	
	scanf("%d%d%d",&year,&month,&day);
	for( i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			days+=31;
		}
		else if(i==4||i==6||i==9||i==11){
			days+=30;
		}
		else if(i==2){
			if(year%400==0||(year%4==0&&year!=0)){
				days+=29;
			}
			else{
				days+=28;
			}
		}
	}
	year=year-1;
	int n=year/4-year/100+year/400;
	days+=2*n+(year-n);
	days+=day;
	a=days%7;
	if(a==0){printf("Sun.");}
	else if(a==1){printf("Mon.");}
	else if(a==2){printf("Tue.");}
	else if(a==3){printf("Wed.");}
	else if(a==4){printf("Thu.");}
	else if(a==5){printf("Fri.");}
	else if(a==6){printf("Sat.");}
	return 0;
}

	
