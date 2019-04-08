int main()
{
       int a,b,c,i,sum;
       scanf("%d%d%d",&a,&b,&c);
       sum=(a-1)*(365%7);
	   sum += (a-1)/4-(a-1)/100+(a-1)/400;
       for(i=1;i<b;i++)
       {
               if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
               {
                       sum+= 31;
               }
               else if (i == 4 || i ==6 || i == 9 || i==11)
               {
                       sum+= 30;
               }
               else if(i=2)
               {
                       if((a%4==0&&a%100!=0)||a%400==0)
                       {
                               sum+=29;
                       }
                       else
                       {
                               sum+=28;
                       }
               }
       }
       for(i=1;i<=c;i++)
       {
               sum++;
       }
       if(sum%7==0) printf("Sun.");
       else if(sum%7==1)printf("Mon.");
       else if(sum%7==2)printf("Tue.");
       else if(sum%7==3)printf("Wed.");
       else if(sum%7==4)printf("Thu.");
       else if(sum%7==5)printf("Fri.");
       else if(sum%7==6)printf("Sat.");
       return 0;
}