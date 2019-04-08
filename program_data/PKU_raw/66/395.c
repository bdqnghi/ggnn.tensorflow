int DiJiTian(int year,int month,int day);
int isRunNian(int year);
int main(){
	int year,month,day,i=0,j=0,k=0,sum=0,runnian=0;
	scanf("%d %d %d",&year,&month,&day);
	if(year>2800){
		year=year-(year/2800)*2800;
	}
	for(i=1;i<year;i++){
		if(isRunNian(i)){
			runnian++;
		}
	}

    sum=(year-1-runnian)*365+runnian*366+DiJiTian(year,month,day);
	j=sum%7;
	if(j==1){
		printf("Mon.");
	}else if(j==2){
		printf("Tue.");
	}else if(j==3){
		printf("Wed.");
	}else if(j==4){
		printf("Thu.");
	}else if(j==5){
		printf("Fri.");
	}else if(j==6){
		printf("Sat.");
	}else if(j==0){
		printf("Sun.");
	}
	return 0;
}

		
int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}


int DiJiTian(int year, int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			result += 30;
		} else if(i == 2){
			if(isRunNian(year)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result += day;
	return result;	
}