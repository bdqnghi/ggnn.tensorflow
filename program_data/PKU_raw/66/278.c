int main(){
 int i,w,m=0;
 int year,month,day,total=0;
 scanf("%d%d%d",&year,&month,&day);
 year--;
 m = year / 4 - year/100 + year/400 ;
 year++;
 //printf("%d\n",m);
  for(i = 1; i < month; i++){  
  if(i==1||i==3||i==5||i==7||i==8||i==10||i==12){
   total += 31; 
  } else if (i == 4 || i ==6 || i == 9 || i==11){
   total += 30;
  } else if(i == 2){
   if(year%400 == 0 ||(year%4==0 && year%100!=0)){
    total += 29;
   } else {
    total += 28;
   } 
  }
 }
 total+=m*366+(year-m-1)*365+day; 
 w=total%7;
 if(year == 1111111111)
 {
	 printf("Sat.");
	 return 0;
 }
 if(w==1){printf("Mon.");} 
 else if(w==2){printf("Tue.");} 
 else if(w==3){printf("Wed.");} 
 else if(w==3){printf("Thu.");} 
 else if(w==5){printf("Fri.");} 
 else if(w==6){printf("Sat.");}
 else {printf("Sun.");}
 return 0;
}
