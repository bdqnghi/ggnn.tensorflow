main()
{
      int a,b,c,n;
      scanf("%d %d %d",&a,&b,&c);
      switch(b)
      {
       case 1:n=c;break;
       case 2:n=31+c;break;
       case 3:n=31+28+c;break;
       case 4:n=31+28+31+c;break;
       case 5:n=31+28+31+30+c;break;
       case 6:n=31+28+31+30+31+c;break;
       case 7:n=31+28+31+30+31+30+c;break;
       case 8:n=31+28+31+30+31+30+31+c;break;
       case 9:n=31+28+31+30+31+30+31+31+c;break;
       case 10:n=31+28+31+30+31+30+31+31+30+c;break;
       case 11:n=31+28+31+30+31+30+31+31+30+31+c;break;
       case 12:n=31+28+31+30+31+30+31+31+30+31+30+c;break;
       }
       if(((a%100==0&&a%400==0)||(a%400==0))&&b>=3)
       n=n+1;
       printf("%d",n);
       getchar();
       getchar();
       }                 
