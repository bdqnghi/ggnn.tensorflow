int main()
{  int sum = 0;
   int year , month , day,i,temp=0;
   int yue[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
   char  week[7][14]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
   scanf("%d %d %d",&year,&month,&day);
   sum+=(year-1)/4-(year-1)/100+(year-1)/400+year-1;
   if( year%4==0 && year%100!=0 || year%400 == 0 )
   yue[1]= 29;
   for( i = 0 ; i <= month-2;i++ )
   sum += yue[i];
   sum = sum + day-1;
   sum %= 7;
   printf("%s",week[sum]); 
}
