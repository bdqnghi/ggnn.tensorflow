int DiJiTian(int year, int month, int day);
int isRunNian(int year);
int main()
{
    int year2,month2,day2,q,w;
    scanf("%d%d%d",&year2,&month2,&day2);
	w = (int)(year2-1) + (int)((year2-1)/4) - (int)((year2-1)/100) + (int)((year2-1)/400) + DiJiTian(year2,month2,day2);
	q=w%7;
	 switch (q)
	 {
	 case 1:
		 printf("Mon.");
		 break;
	 case 2:
		 printf("Tue.");
		 break;
	 case 3:
		 printf("Wed.");
		 break;
	 case 4:
		 printf("Thu.");
		 break;
	 case 5:
		 printf("Fri.");
		 break;
	 case 6:
		 printf("Sat.");
		 break;
	 case 0:
		 printf("Sun.");
	 }
     return 0;
     }    
int DiJiTian(int year, int month, int day){
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
int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
