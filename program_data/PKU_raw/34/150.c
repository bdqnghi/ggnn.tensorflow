int main()
{
    long x,m; 
    scanf("%ld",&x);
    while (x!=1)
    {
      if (x%2==0)  {printf("%ld/2=%ld\n",x,x/2);x=x/2;}
       else {m=x*3+1;printf("%ld*3+1=%ld\n",x,m);x=m;}
      
          }
    if (x==1)printf("End");

    }
