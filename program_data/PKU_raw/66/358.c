int isRunNian(int year){
 int result;
 if(year%400==0||(year%4==0&&year%100!=0)){
  result = 1;
 } else{
  result = 0;
 }
      return result; 
}
int main(){
 int year,month,day;
 long total;
 scanf("%d%d%d",&year,&month,&day);
  total=0;
 int i;
 for(i=1; i<month;i++){ 
  if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
   total+=31; 
  } else if (i==4||i==6||i==9||i==11){
   total+=30;
  } else if(i==2){
   if(isRunNian(year)){
    total+=29;
   } else {
    total+=28;
   } 
  }
 }
 total+=day; 
 total+=(year-1)/4-(year-1)/100+(year-1)/400+(year-1)%7*365;
 int l;
 l=total%7;
 switch(l)
 {
 case 1:  printf("Mon.\n");
  break;
    case 2:  printf("Tue.\n");
  break;      
 case 3:  printf("Wed.\n");
  break;
 case 4:  printf("Thu.\n");
  break;
 case 5:  printf("Fri.\n");
  break;
 case 6:  printf("Sat.\n");
  break;
 default:  printf("Sun.\n");
 }
 return 0;
}