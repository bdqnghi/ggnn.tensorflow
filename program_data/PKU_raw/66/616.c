int main(){
  int year,month,day,days;
  int a,b=0,c=0,d;
  scanf("%d%d%d",&year,&month,&day);
  a=year-1;
  days=a+a/4-a/100+a/400;
  for(int i=1;i<month;i++){
  if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
    b+=3;}
  else if(i==4||i==6||i==9||i==11){
  b+=2;}
  else if(i==2){
    if(year%4==0&&year%100!=0||year%400==0){
      b+=1;}
  
}}d=(days+b+day)%7;
  if(d==0){printf("Sun.");}
else if(d==1){printf("Mon.");}
else if(d==2){printf("Tue.");}
else if(d==3){printf("Wed.");}
else if(d==4){printf("Thu.");}
else if(d==5){printf("Fri.");}
else if(d==6){printf("Sat.");}
    

 return 0;
}