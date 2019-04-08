int isRunNian(int year);
int DiJiTian(int year, int month, int day);
int main(){

	int y,m,d,sum,a,b,i,n=0;
scanf("%d%d%d",&y,&m,&d);
a= DiJiTian(y,m,d);
a=a%7;
y=y%(365*7*400);
for (i=1;i<y;i++){if(isRunNian(i)){n+=1;}}
b=((n*2)%7)+((y-1-n)%7);

sum=a+b;

switch(sum%7){

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
break;

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

