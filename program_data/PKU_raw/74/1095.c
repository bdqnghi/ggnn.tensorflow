int f(int m)
{
    int n=0;
    while(m!=0)
    {
               n=10*n+m%10;
               m=m/10;
    }
    return(n);
}
int g(int m)
{
    int i,s=0;
    for(i=2;i<=sqrt(m);i++)
    {
                           if(m%i==0) {s++;break;}
    }
    if(s==0) return(1);
    else return(0);
}
               
    
    
main()
{
      int m,n,i,j,s=0;
      scanf("%d%d",&m,&n);
      for(i=m;i<=n;i++)
      {
                       if(f(i)==i&&g(i)==1) {printf("%d",i);s++;break;}
      }
      if(s==0) printf("no");
      else {
            for(j=i+1;j<=n;j++)
               {
                       if(f(j)==j&&g(j)==1) printf(",%d",j);
               }
            }

 
}
      