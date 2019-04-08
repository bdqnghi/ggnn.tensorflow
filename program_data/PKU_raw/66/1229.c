
int isrunyear(int year);
int main(){
int year,month,day,i,total=0;
scanf("%d%d%d",&year,&month,&day);
           if(month==1){
                total=day;
                   }else {
                       for(i=1;i<month;i++){
                           if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
                                            total+=31;
                           }
                           else if(i==4||i==6||i==9||i==11){
                                            total+=30;
                           }
                           if(i==2){
                              if(isrunyear(year)){
                                          total+=29;
                              } else 
                                total+=28;
                           }
                        }
                     total+=day;
                    }

if (year%400!=0){
                 year=year%400;
                
}
if (year%400==0){year=400;}
 year--;
for(i=year;i>=1;i--){
         if (isrunyear(i)){
                        total+=366;
         }
         else{
               total+=365;
         }
}


if(total%7==1) printf("Mon.");
if(total%7==2) printf("Tue.");
if(total%7==3) printf("Wed.");
if(total%7==4) printf("Thu.");
if(total%7==5) printf("Fri.");
if(total%7==6) printf("Sat.");
if(total%7==0) printf("Sun.");



return 0;
}
int isrunyear(int year){
int result;
if (year%400==0||year%4==0&&year%100!=0){
result=1;
}else{
result=0;
}
return result;
}
