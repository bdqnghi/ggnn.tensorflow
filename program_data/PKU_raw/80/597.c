   int main(void){
   int year1,month1,day1,j,a,k;
   int year2,month2,day2,l,n,b,m;
   int sum1,sum2;
   int result;
   
   scanf("%d %d %d",&year1,&month1,&day1);
   
   scanf("%d %d %d",&year2,&month2,&day2);
   j=(year1-1)/4-(year1-1)/100+(year1-1)/400;
   if((year1%4==0&&year1%100!=0)||(year1%400==0))
   a=1;
   else
   a=0;
if(month1==1)
   k=0;
else if(month1==2)
   k=31;
else if(month1==3)
   k=59+a;
else if(month1==4)
   k=90+a;
else if(month1==5)
   k=120+a;
else if(month1==6)
   k=151+a;
else if(month1==7)
   k=181+a;
else if(month1==8)
   k=212+a;
else if(month1==9)
   k=243+a;
else if(month1==10)
   k=273+a;
else if(month1==11)
   k=304+a;
else 
   k=334+a;
sum1=year1*365+k+day1+j;
   n=(year2-1)/4-(year2-1)/100+(year2-1)/400;
   {if((year2%4==0&&year2%100!=0)||(year2%400==0))
   b=1;
   else
   b=0;
if(month2==1)
   m=0;
else if(month2==2)
   m=31;
else if(month2==3)
   m=59+b;
else if(month2==4)
   m=90+b;
else if(month2==5)
   m=120+b;
else if(month2==6)
   m=151+b;
else if(month2==7)
   m=181+b;
else if(month2==8)
   m=212+b;
else if(month2==9)
   m=243+b;
else if(month2==10)
   m=273+b;
else if(month2==11)
   m=304+b;
else 
   m=334+b;
sum2=year2*365+m+day2+n;}
    result=fabs(sum1-sum2);
    printf("%d",result);
}
