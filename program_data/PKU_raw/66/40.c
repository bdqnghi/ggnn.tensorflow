int main()
{
   long int year,sum=0;
   int month,day,i,j;
   scanf("%d%d%d",&year,&month,&day);
   year=year-(year-1)/400*400;
   for(j=1;j<year;j++)
   {
    if(j%4==0&&j%100!=0||j%400==0) sum+=2;
    else   sum++;
   }
    int s[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<month-1;i++)
     sum+=s[i];
     sum+=day;
     if((year%4==0&&year%100!=0||year%400==0)&&month>2)
     sum++;
    switch(sum%7)
    {
      case 0:  printf("Sun.\n");   break;
      case 1:  printf("Mon.\n");   break;
      case 2:  printf("Tue.\n");   break;
      case 3:  printf("Wed.\n");   break;
      case 4:  printf("Thu.\n");   break;
      case 5:  printf("Fri.\n");   break;
      default: printf("Sat.\n");
     }
  return 0;
}