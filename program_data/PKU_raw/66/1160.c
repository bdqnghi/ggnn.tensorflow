int isRunNian(int year);

int isRunNian(int year){
	int result;
	if(year%400 == 0 ||(year%4==0 && year%100!=0)){
		result = 1;
	} else{
		result = 0;
	}
      return result;	
}
int main(){
	int year, month, day, total,j,xqj;
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
	total += day;
	year=year-1;
	xqj=total%7;
	xqj=xqj+(year/4-year/100+year/400 )*2+year-(year/4-year/100+year/400 ) ;                     
                   xqj=xqj%7;
                  if(xqj==0){
                             printf("Sun.");
                             }
                             if(xqj==1){
                             printf("Mon.");
                             }
                              if(xqj==2){
                             printf("Tue.");
                             }
                              if(xqj==3){
                             printf("Wed.");
                             }
                             if(xqj==4){
                             printf("Thu.");
                             }
                                if(xqj==5){
                             printf("Fri.");
                             }
                              if(xqj==6){
                             printf("Sat.");
                             }
                                
            
				
      return 0;	
}

