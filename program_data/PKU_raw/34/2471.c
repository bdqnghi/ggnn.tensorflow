main()
{
      int a,b;
      scanf("%d",&a);
     loop:if(a==1)
     {
     printf("End");
     getchar();
     getchar();
     return 0;
     }
     else if(a%2!=0)
      {
       {
                 b=a*3+1;
       }
       printf("%d*3+1=%d\n",a,b);
       a=b;
      }
      else if(a%2==0)
      {
       {
           b=a/2;
       }
       printf("%d/2=%d\n",a,b);
       a=b;
      }
      goto loop;
}