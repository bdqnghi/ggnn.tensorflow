int main()
{
   int x,a,b,c;
   scanf("%d",&x);
   a=0,b=0,c=0;
   if(x%7==0)
   {
      a=7;
   }
   if(x%5==0)
   {
      b=a;
      a=5;
   }
   if(x%3==0)
   {
      c=b;
      b=a;
      a=3;
   }
   if(a==0)
   {
      printf("n");
   }
   else
   {
      if(b==0)
      {
         printf("%d",a);  
      }
      else
      {
         if(c==0)
         {
            printf("%d %d",a,b);
         }
         else
         {  printf("%d %d %d",a,b,c);}
      }
   }
   scanf("%d",&x);  
   return 0;
} 