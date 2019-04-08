int main()
{
 int year,month,days;
 int sum=0;
 int t,i; 
 char c[10][10]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
 int s[12]={0,31,28,31,30,31,30,31,31,30,31,31};
 scanf("%d%d%d",&year,&month,&days);

 sum=year%7+year/4-year/100+year/400;

 
 for(i=0;i<month;i++)
 {
  sum=sum+s[i];
 }

 sum=sum+days-1;

 if(month<=2&&((year%4==0&&year%100!=0)||year%400==0))
 
       sum=sum-1;
 
 t=sum%7;
 printf("%s\n",c[t]);
 return 0;
}

