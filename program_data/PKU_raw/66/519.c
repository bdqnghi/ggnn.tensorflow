

int DiJiTian(int year, int month, int day);
int main(){
	int y,m,d;
	int k,j;
	
	scanf("%d %d %d",&y,&m,&d);

	j=y-1;

    k= DiJiTian(y,m,d) +j+j/400+j/4-j/100;
    m=(k%7);
	if(m==0){
		printf("Sun.\n");
	}
	else if(m==1){
		printf("Mon.\n");
	}
	else if(m==2){
		printf("Tue.\n");
	}
	else if(m==3){
		printf("Wed.\n");
	}
	else if(m==4){
		printf("Thu.\n");
	}
	else if(m==5){
		printf("Fri.\n");
	}
	else {
		printf("Sat.\n");
	}
    
	
    return 0;
}
int DiJiTian(int year, int month, int day){
	int result = 0;
	for(int i = 1; i < month; i++){ 
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
			result += 31;	
		} else if (i == 4 || i ==6 || i == 9 || i==11){
			result += 30;
		} else if(i == 2){
			if(year%400 == 0 ||(year%4==0 && year%100!=0)){
				result += 29;
			} else {
				result += 28;
			}	
		}
	}
	result += day;
	return result;	
}
