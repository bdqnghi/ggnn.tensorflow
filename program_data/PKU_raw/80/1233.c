int DiJiTian(int year,int month,int day);
int isRunNian(int year);
int main(){
	int year1,month1,day1;
	int year2,month2,day2;
	int zongyear;
	int zongday;
	int xiangchaday;
	int x,y;
	int i;
	int e,f,g;
	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
	if(year1>year2){
		e=year1;
		year1=year2;
		year2=e;
		f=month1;
		month1=month2;
		month2=f;
		g=day1;
		day1=day2;
		day2=g;
	}
	x=DiJiTian(year1,month1,day1);
	y=DiJiTian(year2,month2,day2);
	zongyear=year2-year1;
	zongday=zongyear*365;
	for(i=year1;i<year2;i++){
		if((i%100!=0&&i%4==0)||i%400==0){
			zongday+=1;
		}
	}
	xiangchaday=zongday+y-x;
	printf("%d",xiangchaday);
	return 0;
}
int DiJiTian(int year, int month, int day){
	int result = 0;
	for(int j = 1; j < month; j++){ 
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
			result += 31;	
		} else if (j == 4 || j ==6 || j == 9 || j==11){
			result += 30;
		} else if(j == 2){
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
int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
