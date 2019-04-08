main()
{
      int judge(int a,int b,int c);
      int sushu(int n);
      int M,N,o,i,l,L,K,flag,n;
      scanf("%d %d",&M,&N);
      flag=0;
      for(n=M;n<=N;n++)
     {o=1;
      for(i=1;;i++)
         {o=o*10;
          if(o>n)
           {l=i;                             
            break;}}
      if(l%2==0)
        L=l/2;
      else
        L=(l-1)/2;
      if(sushu(n)&&judge(n,L,l))
       {printf("%d",n);
        K=n+1;
        flag=1;
        break;}}
      for(n=K;n<=N;n++)
     {o=1;
      for(i=1;;i++)
         {o=o*10;
          if(o>n)
           {l=i;                             
            break;}}
      if(l%2==0)
        L=l/2;
      else
        L=(l-1)/2;
      if(sushu(n)&&judge(n,L,l))
       {printf(",%d",n);
        flag=flag+1;}}
      if(flag==0)
        printf("no\n");
}
int sushu(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
      if(n%i==0)
        return 0;
    return 1;
}
int judge(int a,int b,int c)
{
     int i,x,y,o;
     i=x=y=o=1;
     if(b==1)
     {for(i=1;i<=c-1;i++)
        o=o*10;
      if(a/o==a%10)
       return 1;
      else
       return 0;}
     else
      {for(i=1;i<=b-1;i++)
         x=x*10;
       for(i=1;i<=c-b;i++)
         y=y*10;
       if((a/y)%10==(a/x)%10)
         if(judge(a,b-1,c))
           return 1;
         else 
           return 0;
       else
         return 0;}
}