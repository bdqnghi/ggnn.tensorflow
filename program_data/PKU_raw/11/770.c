main()
{
      int a,b,c,n=0;
      scanf("%d %d %d",&a,&b,&c);
      if(a%4==0&&a%100!=0)
      a=0;
      if(a%100==0&&a%400==0)
      a=0;
      if(a!=0)
      {
              switch (b-1)
              {
                     case 12:n=n+31;
                     case 11:n=n+30;
                     case 10:n=n+31;
                     case 9:n=n+30;
                     case 8:n=n+31;
                     case 7:n=n+31;
                     case 6:n=n+30;
                     case 5:n=n+31;
                     case 4:n=n+30;
                     case 3:n=n+31;
                     case 2:n=n+28;
                     case 1:n=n+31;
              }
              n=n+c;
              printf("%d",n);
      }
      if(a==0)
      {
              switch (b-1)
              {
                     case 12:n=n+31;
                     case 11:n=n+30;
                     case 10:n=n+31;
                     case 9:n=n+30;
                     case 8:n=n+31;
                     case 7:n=n+31;
                     case 6:n=n+30;
                     case 5:n=n+31;
                     case 4:n=n+30;
                     case 3:n=n+31;
                     case 2:n=n+29;
                     case 1:n=n+31;
              }
              n=n+c;
              printf("%d",n);
      }
      
      getchar();
      getchar();
}
              
      
      
