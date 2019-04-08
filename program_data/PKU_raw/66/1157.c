int Runnian(int year);
int main(){
	int year,month,day,total=0,i,k;
	scanf("%d %d %d",&year,&month,&day);
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			total+=31;
		}else if(i==4||i==6||i==9||i==11){
			total+=30;
		}else if(i==2){
			if(year%400==0||(year%4==0&&year%100!=0)){
				total+=29;
			}else{
				total+=28;
			}
		}
	}
	if(year>2000){
		year%=2000;
	}
	for(k=1;k<year;k++){
		if(k%400==0||(k%4==0&&k%100!=0)){
			total+=2;
			}else{
			total+=1;
			}
	}
	total+=day;
	if(total%7==1){
		printf("Mon.");
	}else if(total%7==2){
		printf("Tue.");
	}else if(total%7==3){
		printf("Wed.");
	}else if(total%7==4){
		printf("Thu.");
	}else if(total%7==5){
		printf("Fri.");
	}else if(total%7==6){
		printf("Sat.");
	}else if(total%7==0){
		printf("Sun.");
	}
	return 0;
}
