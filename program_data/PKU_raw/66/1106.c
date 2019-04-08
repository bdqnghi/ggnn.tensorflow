

    int isRunNian(int year){
    int result;
    if(year%400==0||(year%4==0&&year%100!=0)){
      result=1;}
      else{
           result=0;}
      return result;
      }
      
   
    int DiJiTian(year,month,day){    
        int result=0;
        int i;
        for(i=1;i<month;i++){
                if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                  result+=31;}
                else if(i==4||i==6||i==9||i==11){
                  result+=30;}
                else if(i==2){
                     if(isRunNian(year)){
                  result+=29;}
                   else{
                   result+=28;}
                   }
                }
        result+=day;
        return result;
        }
     int main(){
     int i;
     int year,month,day;
     int year1,total;
     int days2=0,days3;
     scanf("%d%d%d",&year,&month,&day);
     year1=(year%400==0?400:year%400);
     for(i=1;i<year1;i++){
       if(isRunNian(i)){
         days2+=366;}
         else{
          days2+=365;
          }
         } 
       days3=DiJiTian(year,month,day);
       total=days2+days3;
       if(total%7==0){
        printf("Sun.");}
      if(total%7==1){
        printf("Mon.");}
      if(total%7==2){
        printf("Tue.");}
      if(total%7==3){
        printf("Wen.");}  
      if(total%7==4){
        printf("Thu.");}
      if(total%7==5){
        printf("Fri.");}
      if(total%7==6){
        printf("Sat.");}
     
      return 0;
     }