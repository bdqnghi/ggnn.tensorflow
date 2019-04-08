main()
{
      int x,a,b;
      scanf("%d",&x);
      
      while(x!=1)
      {
         if(x%2==0)
         {
         printf("%d/2=%d\n",x,x/2);
         x=x/2;
         }
         else
         {
             printf("%d*3+1=%d\n",x,x*3+1);
         x=x*3+1;
         }
      
      }
      if(x==1)
      {printf("End");}
      
      
      
      
      getchar();
      getchar();
      }
