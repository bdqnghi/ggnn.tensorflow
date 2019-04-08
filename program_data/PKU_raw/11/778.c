main()
{
      int year,month,day,sum=0,sm=0,k;
      scanf("%d %d %d",&year,&month,&day);
      if((((year%4==0)&&(year%100!=0))||(year%400==0))!=0)
      {
        int m[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
        for(k=0;k<month;k++)
          sum=sum+m[k];
        sum=sum+day;  
        printf("%d",sum);
      } 
      else
      {
        int n[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        for(k=0;k<month;k++)
          sm=sm+n[k];
          sm=sm+day;
          printf("%d",sm);
      }
      getchar();
      getchar();
}         
             
      