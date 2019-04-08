main()
{
      int n ;
      double x,y;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
         int a,b;
         scanf("%d %d",&a,&b);
         if(i==0)
         { 
            x=(double)b/a;
            continue;
         }
         else 
         {
              y=(double)b/a;
         }
         if(y-x>0.05)
         printf("better\n");
         else if(x-y>0.05)
         printf("worse\n");
         else
          printf("same\n");
      }
    getchar();
    getchar(); 
    getchar();
    getchar(); 
}
