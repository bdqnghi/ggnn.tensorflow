int main()
{
	int GongJiTian(int, int, int);
	int year1, month1, day1, year2, month2, day2;
	scanf("%d %d %d", &year1, &month1, &day1);
	scanf("%d %d %d", &year2, &month2, &day2);
	int result, a, b;
	a=GongJiTian(year1,month1,day1);
	b=GongJiTian(year2,month2,day2);
	if(a>b){
		result=a-b;
	}else{
		result=b-a;
	}
	printf("%d", result);
	return 0;
}

int DiJiTian(int year, int month, int day){
	int isRunNian(int);
	int result=0;
	int i;
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result+=31;
		}else if(i==4||i==6||i==9||i==11){
			result+=30;
		}else if(i==2){
			if(isRunNian(year)){
				result+=29;
			}else{
				result+=28;
			}
		}
	}
	result+=day;
	return result;
}

int isRunNian(int year){
	int result;
	if(year%400==0||((year%4==0)&&(year%100!=0))){
		result=1;
	}else{
		result=0;
	}
	return result;
}

int GongJiTian(int year, int month, int day){
	int DiJiTian(int, int, int);
	int result=0;
	int i;
	for(i=1;i<year;i++){
		if(isRunNian(i)){
			result+=366;
		}else{
			result+=365;
		}
	}
	result+=DiJiTian(year, month, day);
	return result;
}