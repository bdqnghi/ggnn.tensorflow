
int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
int DiJiTian(int year,int month,int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 	//step1
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
	result += day;	//step2
	return result;	
}

int main(){
	int year,month,day;
	int x=0,y=0,z=0,m,c;
	scanf("%d%d%d",&year,&month,&day);

 
	z = (year-1) + ((year-1)/4) - ((year-1)/100) + ((year-1)/400) + DiJiTian(year,month,day);

	if(z%7==1) printf("Mon.");
	else if(z%7==2) printf("Tue.");
	else if(z%7==3) printf("Wed.");
	else if(z%7==4) printf("Thu.");
	else if(z%7==5) printf("Fri.");
	else if(z%7==6) printf("Sat.");
	else if(z%7==0) printf("Sun.");
	return 0;
}
