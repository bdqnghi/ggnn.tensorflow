int main(int argc, char* argv[])
{ 
   int year,month,date;
   int a=0;
   scanf("%d %d %d",&year,&month,&date);
   if(((year%4==0)&&(year%100!=0))||year%400==0){
      switch (month){
          case 1:a=date;break;
          case 2:a=31+date;break;
          case 3:a=31+29+date;break;
          case 4:a=31+29+31+date;break;
          case 5:a=31+29+31+30+date;break;
          case 6:a=31+29+31+30+31+date;break;
          case 7:a=31+29+31+30+31+30+date;break;
          case 8:a=31+29+31+30+31+30+31+date;break;
          case 9:a=31+29+31+30+31+30+31+31+date;break;
          case 10:a=31+29+31+30+31+30+31+31+30+date;break;
          case 11:a=31+29+31+30+31+30+31+31+30+31+date;break;
          case 12:a=31+29+31+30+31+30+31+31+30+31+30+date;break;
      }
   }
   else{
     switch(month){
          case 1:a=date;break;
          case 2:a=31+date;break;
          case 3:a=31+28+date;break;
          case 4:a=31+28+31+date;break;
          case 5:a=31+28+31+30+date;break;
          case 6:a=31+28+31+30+31+date;break;
          case 7:a=31+28+31+30+31+30+date;break;
          case 8:a=31+28+30+31+30+31+date;break;
          case 9:a=31+28+31+30+31+30+31+31+date;break;
          case 10:a=31+28+31+30+31+30+31+31+30+date;break;
          case 11:a=31+28+31+30+31+30+31+31+30+31+date;break;
          case 12:a=31+28+31+30+31+30+31+31+30+31+30+date;break;
      }
   }
   printf("%d\n",a);
   return 0;
}  