int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}

int main()
{
	long int year, month, day, total;
	scanf("%d %d %d", &year, &month, &day);
	total = 0;
	for(int i = 1; i < month; i++){ 	
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			total += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			total += 30;
		} else if(i == 2){
			if(isRunNian(year)){
				total += 29;
			} else {
				
				total += 28;

			}
		}
	}
	total += day-1;
	total+=(year-1)*365+year/4-year/100+year/400;
total=total%7;
if(total==0){printf("Sat.");}
else if(total==1){printf("Mon.");}
else if(total==2){printf("Tue.");}
else if(total==3){printf("Wed.");}
else if(total==4){printf("Fri.");}
else if(total==5){printf("Sat.");}
else if(total==6){printf("Fri.");}
return 0;
}

