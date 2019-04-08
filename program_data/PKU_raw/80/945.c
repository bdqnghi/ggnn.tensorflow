int main()
{int startYear,startMonth,startDay,endYear,endMonth,endDay,i,s=0,a=0;
scanf("%d %d %d\n",&startYear,&startMonth,&startDay);
scanf("%d %d %d",&endYear,&endMonth,&endDay);
for(i=startYear+1;i<endYear;i++){
 if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
  s=s+1;
 else
  s=s+0;
 }
s=s+(endYear-startYear-1)*365;
if(endMonth>2&&endMonth<=8){
 for(i=1;i<endMonth;i++){
  if(i%2==1)
   s=s+31;
  else if(i%2==0&&i!=2)
   s=s+30;
  else if(i==2){
   if((endYear % 4 == 0 &&endYear % 100 != 0) || (endYear % 400 == 0))
     s=s+29;
   else
     s=s+28;
   }
  }
 }
else if(endMonth>8){
 if((endYear % 4 == 0 &&endYear % 100 != 0) || (endYear % 400 == 0))
     s=s+29+4*31+2*30;
 else
     s=s+28+4*31+2*30;
 for(i=8;i<endMonth;i++){
  if(i%2==1)
   s=s+30;
  else if(i%2==0&&i!=2)
   s=s+31;
  }
 }
else if(endMonth==1)
 s=s+0;
else if(endMonth==2)
 s=s+31;
s=s+endDay;
if(startMonth>2&&startMonth<=8){
 for(i=1;i<startMonth;i++){
  if(i%2==1)
   a=a+31;
  else if(i%2==0&&i!=2)
   a=a+30;
  else if(i==2){
   if((startYear % 4 == 0 &&startYear % 100 != 0) || (startYear % 400 == 0))
     a=a+29;
   else
     a=a+28;
   }
  }
 }
else if(startMonth>8){
 if((endYear % 4 == 0 &&endYear % 100 != 0) || (endYear % 400 == 0))
     a=a+29+4*31+2*30;
 else
     a=a+28+4*31+2*30;
 for(i=8;i<startMonth;i++){
  if(i%2==1)
   a=a+30;
  else if(i%2==0&&i!=2)
   a=a+31;
  }
 }
else if(startMonth==1)
 a=a+0;
else if(startMonth==2)
 a=a+31;
a=a+startDay;
if((startYear % 4 == 0 &&startYear % 100 != 0) || (startYear % 400 == 0))
 s=s+366-a;
else
 s=s+365-a;
printf("%d",s);    
return 0;
}

