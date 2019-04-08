 
int main(){
    int y,m,d,i;
    scanf("%d %d %d",&y,&m,&d);
    
    d+=(y-1)+(y-1)/4+(y-1)/400-(y-1)/100;
    for(i=1;i<m;i++){
    if(i==1||i==3||i==5||i==7||i==8||i==10){
    d+=31;     
    }
  if(i==4||i==6||i==9||i==11)
  {d+=30;}
    if(i==2){
             if(y%400==0||y%4==0&&y%100!=0){d+=29;}
    else {d+=28;}}
                      }
                      if(d%7==0){
                                 printf("Sun.");}
        if(d%7==1){
                                 printf("Mon.");} 
 if(d%7==2){
                                 printf("Tue.");}
  if(d%7==3){
                                 printf("Wed.");}
   if(d%7==4){
                                 printf("Thu.");}
    if(d%7==5){
                                 printf("Fri.");}
     if(d%7==6){
                                 printf("Sat.");}

return 0;}