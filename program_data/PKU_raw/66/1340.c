int main()
{
 int year,month,date,a,b,c;
 scanf("%d %d %d",&year,&month,&date);
 if(year<100)
  a=3;
 else
 a=year/100%4*(-2)+5+year%100/4+year%100;
 if((year%400!=0&&year%100==0)||year%4!=0)
 {
  switch(month)
  {
  case 1:
  case 10:
   b=1;
   break;
  case 2:
  case 3:
  case 11:
   b=4;
   break;
  case 4:
  case 7:
   b=0;
   break;
  case 5:
   b=2;
   break;
  case 6:
   b=5;
   break;
  case 8:
   b=3;
   break;
  case 9:
  case 12:
   b=6;
   break;
  }
  
 }
    else
 {
   switch(month)
  {
  case 10:
   b=1;
   break;
  case 3:
  case 11:
   b=4;
   break;
  case 1:
  case 4:
  case 7:
   b=0;
   break;
  case 5:
   b=2;
   break;
  case 6:
   b=5;
   break;
  case 2:
  case 8:
   b=3;
   break;
  case 9:
  case 12:
   b=6;
   break;
  }
 }
 c=(a+b+date)%7;
 switch(c)
 {
 case 1:
  printf("Mon.");
  break;
 case 2:
  printf("Tue.");
  break;
 case 3:
  printf("Wed.");
  break;
 case 4:
  printf("Thu.");
  break;
 case 5:
  printf("Fri.");
  break;
 case 6:
  printf("Sat.");
  break;
 case 0:
  printf("Sun.");
  break;
 }
return 0;
}
