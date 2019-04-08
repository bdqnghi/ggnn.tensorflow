int main (){
	int year,month,day,dayName;
	int sum=0;
	int i,j;
	scanf("%d %d %d",&year,&month,&day);
	sum += sum + year -1 + (year-1)/4 -(year-1)/100 + (year-1)/400;
	sum = sum % 7;
	for (i=1;i<month;i++){
		if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12){
			sum +=31;
			continue;
		}
		if (i==4 || i==6 || i==9 || i==11)	{
			sum +=30;
			continue;
		}
		if (( year%4 == 0 && year%100 != 0) || year%400 == 0)
			 sum += 29;
		else sum += 28;
	}
	sum += day;
	dayName = sum%7;
	switch(dayName){
		case 1 :
			printf("Mon.");
			break;
		case 2 : 
			printf("Tue.");
			break;
		case 3 :
			printf("Wen.");
			break;
		case 4 :
			printf("Thu.");
			break;
		case 5 :
			printf("Fri.");
			break;
		case 6 :
			printf("Sat.");
			break;
		case 0 :
			printf("Sun.");
			break;
	}


	


}