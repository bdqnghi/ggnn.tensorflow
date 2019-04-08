int main()
{
 int year,month,day;
 scanf("%d %d %d",&year,&month,&day);
 if((year%4==0&&year%100!=0)||(year%400==0))
  {
   if(month==1)
    printf("%d",day);
   else if(month==2)
    printf("%d",31+day);
   else if(month==3)
    printf("%d",31+29+day);
   else if(month==4)
    printf("%d",31+29+31+day);
   else if(month==5)
    printf("%d",31+29+31+30+day);
   else if(month==6)
    printf("%d",31+29+31+30+31+day);
   else if(month==7)
    printf("%d",31+29+31+30+31+30+day);
   else if(month==8)
    printf("%d",31+29+31+30+31+30+31+day);
   else if(month==9)
    printf("%d",31+29+31+30+31+30+31+31+day);
   else if(month==10)
    printf("%d",31+29+31+30+31+30+31+31+30+day);
   else if(month==11)
    printf("%d",31+29+31+30+31+30+31+31+30+31+day);
   else
    printf("%d",31+29+31+30+31+30+31+31+30+31+30+day);
  }
 else
  {
   if(month==1)
    printf("%d",day);
   else if(month==2)
    printf("%d",31+day);
   else if(month==3)
    printf("%d",31+28+day);
   else if(month==4)
    printf("%d",31+28+31+day);
   else if(month==5)
    printf("%d",31+28+31+30+day);
   else if(month==6)
    printf("%d",31+28+31+30+31+day);
   else if(month==7)
    printf("%d",31+28+31+30+31+30+day);
   else if(month==8)
    printf("%d",31+28+31+30+31+30+31+day);
   else if(month==9)
    printf("%d",31+28+31+30+31+30+31+31+day);
   else if(month==10)
    printf("%d",31+28+31+30+31+30+31+31+30+day);
   else if(month==11)
    printf("%d",31+28+31+30+31+30+31+31+30+31+day);
   else
    printf("%d",31+28+31+30+31+30+31+31+30+31+30+day);                                         
  }
 printf("\n");
  getchar();
  return 0;   
}