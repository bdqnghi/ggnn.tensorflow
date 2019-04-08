main()
{
      int year,month,day,D=0,i;
      scanf("%d %d %d",&year,&month,&day);
      if(year%400==0||(year%100!=0&&year%4==0))
      {
               int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
               for(i=0;i<month-1;i++)
               D=D+a[i];
               D=D+day;
      }
      else
      {
               int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
               for(i=0;i<month-1;i++)
               D=D+a[i];
               D=D+day;
      }
      printf("%d",D);
      getchar();
      getchar();
      return 0;
}