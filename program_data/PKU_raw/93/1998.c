main()
{
      int n,N;
      scanf("%d",&n);
      N=n;
      
      if(n%3==0)
        n=n/3;
      if(n%5==0)
        n=n/5;
      if(n%7==0)
        n=n/7;
      
      if(N/n==1)
        printf("n");
      if(N/n==3)
        printf("3");
      if(N/n==5)
        printf("5");
      if(N/n==7)
        printf("7");
      if(N/n==15)
        printf("3 5");
      if(N/n==21)
        printf("3 7");
      if(N/n==35)
        printf("5 7");
      if(N/n==105)
        printf("3 5 7");
}
