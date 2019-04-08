int RunNian(int year);
int DiJiTian(int year, int month, int day);
int main(){
        int y ,m ,d, d2,d3;
        scanf("%d%d%d",&y,&m,&d);
        d2=(y-1)+(y-1)/400*97+(y-1)%400/100*24+(y-1)%100/4;
        d2=d2%7;
        d3=DiJiTian(y, m, d)%7;
        d2=(d2+d3)%7;
        if(d2==0){
                printf("Sun.");
        }
        if(d2==1){
                printf("Mon.");
        }
        if(d2==2){
				printf("Tue.");
        }
        if(d2==3){
                printf("Wed.");
        }
        if(d2==4){
                printf("Thu.");
        }
        if(d2==5){
                printf("Fri.");
        }
        if(d2==6){
                printf("Sat.");
        }

        return 0;
}


int RunNian(int year){
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
   if(RunNian(year)){
    result += 29;
  } else {
    result += 28;
   } 
  }
 }
 result += day; 
 return result; 
}
