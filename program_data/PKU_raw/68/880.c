int sushu(long n)
{
    long i;
    if(n==3||n==5||n==7)
        return 0;
    else 
    {for(i=3;i<=sqrt(n);i++)
    {
        if(n%i==0)
          break;
     }
     if(i>sqrt(n))
           return 0;
     else 
           return 1;}
}
main()
{
    long n;
    scanf("%ld",&n);
     long i,j;
     for(i=6;i<=n;i=i+2)
     {
        
         for(j=3;j<=i/2;j=j+2)
         {
               if(sushu(j)==0&&sushu(i-j)==0)
               {      
                     printf("%d=%d+%d\n",i,j,i-j);
                     break;
               }
         }
    }
    
}