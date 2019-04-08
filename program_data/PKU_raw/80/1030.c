int main()
{
    int startYear,startMonth,startDay,endYear,endMonth,endDay,i,j,a,b,c=0,d,m,n,x,y,sum;
    scanf("%d%d%d%d%d%d",&startYear,&startMonth,&startDay,&endYear,&endMonth,&endDay);
    a=endYear-startYear;
    sum=365*a;
    for(b=startYear;b<endYear;b++)
  {  if((b % 4 == 0 && b % 100 != 0) || (b % 400 == 0))
    c++;}
    sum=sum+c;
    if((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0))
   {m=29; if(startMonth==1){x=startDay;}if(startMonth==2){x=31+startDay;}
    if(startMonth==3){x=31+m+startDay;}if(startMonth==4){x=31+m+31+startDay;}if(startMonth==5){x=31+m+31+30+startDay;}
    if(startMonth==6){x=31+m+31+30+31+startDay;}if(startMonth==7){x=31+m+31+30+31+30+startDay;}
    if(startMonth==8){x=31+m+31+30+31+30+31+startDay;}if(startMonth==9){x=31+m+31+30+31+62+30+startDay;}
    if(startMonth==10){x=31+m+31+30+31+62+30+30+startDay;}if(startMonth==11){x=31+m+31+30+31+62+61+30+startDay;}
    if(startMonth==12){x=31+m+31+30+31+62+61+30+30+startDay;}} 
    else
     {m=28; if(startMonth==1){x=startDay;}if(startMonth==2){x=31+startDay;}
    if(startMonth==3){x=31+m+startDay;}if(startMonth==4){x=31+m+31+startDay;}if(startMonth==5){x=31+m+31+30+startDay;}
    if(startMonth==6){x=31+m+31+30+31+startDay;}if(startMonth==7){x=31+m+31+30+31+30+startDay;}
    if(startMonth==8){x=31+m+31+30+31+30+31+startDay;}if(startMonth==9){x=31+m+31+30+31+62+30+startDay;}
    if(startMonth==10){x=31+m+31+30+31+62+30+30+startDay;}if(startMonth==11){x=31+m+31+30+31+62+61+30+startDay;}
    if(startMonth==12){x=31+m+31+30+31+62+61+30+30+startDay;}} 
    sum=sum-x;
    if((endYear % 4 == 0 && endYear % 100 != 0) || (endYear % 400 == 0))
   {m=29; if(endMonth==1){y=endDay;}if(endMonth==2){y=31+endDay;}
    if(endMonth==3){y=31+m+endDay;}if(endMonth==4){y=31+m+31+endDay;}if(endMonth==5){y=31+m+31+30+endDay;}
    if(endMonth==6){y=31+m+31+30+31+startDay;}if(endMonth==7){y=31+m+31+30+31+30+endDay;}
    if(endMonth==8){y=31+m+31+30+31+30+31+startDay;}if(endMonth==9){y=31+m+31+30+31+62+30+endDay;}
    if(endMonth==10){y=31+m+31+30+31+62+30+30+startDay;}if(endMonth==11){y=31+m+31+30+31+62+61+30+endDay;}
    if(endMonth==12){y=31+m+31+30+31+62+61+30+30+endDay;}} 
    else
       {m=28; if(endMonth==1){y=endDay;}if(endMonth==2){y=31+endDay;}
    if(endMonth==3){y=31+m+endDay;}if(endMonth==4){y=31+m+31+endDay;}if(endMonth==5){y=31+m+31+30+endDay;}
    if(endMonth==6){y=31+m+31+30+31+startDay;}if(endMonth==7){y=31+m+31+30+31+30+endDay;}
    if(endMonth==8){y=31+m+31+30+31+30+31+startDay;}if(endMonth==9){y=31+m+31+30+31+62+30+endDay;}
    if(endMonth==10){y=31+m+31+30+31+62+30+30+startDay;}if(endMonth==11){y=31+m+31+30+31+62+61+30+endDay;}
    if(endMonth==12){y=31+m+31+30+31+62+61+30+30+endDay;}} 
    sum=sum+y;
    printf("%d",sum);
    return 0;}