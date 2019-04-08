int main()
{  int a,b,c,d,n;
   scanf("%d",&n);
   if(n<=9)
   printf("%d",n);
   else
   {  if(n<=99)
      {a=n%10; b=n/10; printf("%d%d",a,b);}
      else
      {  if(n<=999)
         {a=n%10; c=n/100; b=(n%100)/10; printf("%d%d%d",a,b,c);}
         else
         { if(n<=9999)
           {a=n%10; b=(n%100)/10; c=(n%1000)/100; d=n/1000; printf("%d%d%d%d",a,b,c,d);}
           else
           printf("00001");

         }

      }

   }

return 0;


}
