int main(){
   int y,m,d,i,k=0,Day,sum,sum1,sum2=0;
    
   scanf("%d %d %d",&y,&m,&d);
    sum1=(y-1)+(y-1)/4-(y-1)/100+(y-1)/400;
           for(i=1;i<m;i++){
          if(i==1||i==3||i==5||i==7||i==8||i==10){
              sum2+=31;
          }
            else if(i==4||i==6||i==9||i==11){
                    sum2+=30;
            }
          else {
              if((y%100==0&&y%400==0)||(y%100!=0&&y%4==0)){
                  sum2+=29;
              }
                else {
                   sum2+=28;
                }
          }
       }
        sum2+=d;
        sum=sum1+sum2;
        Day=sum%7;
    switch(Day){
        case 0: printf("Sun."); break;
        case 1: printf("Mon."); break;
        case 2: printf("Tue."); break;
        case 3: printf("Wed."); break;
        case 4: printf("Thu."); break;
        case 5: printf("Fri."); break;
       default: printf("Sat.");
    } 
   return 0;   
}
