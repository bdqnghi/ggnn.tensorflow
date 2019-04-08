int main()
{
   int n,i,j,a,flag1 = 0, flag2=0;
   scanf("%d",&n);
   
   for(i=3;i<=n/2;i++)
   {flag1 = 0;
    flag2=0;
      a=i;
      for(j=2;j<=i/2;j++)
      {
         if(i%j==0)
            flag1=1;
      } 
      if(flag1 ==0)
      {
         i=n-i;
         for(j=2;j<=i/2;j++)
         {
            if(i%j==0)
               flag2=1;
         }
         if(flag1==0 && flag2==0) 
            printf("%d %d\n",n-i,i);            
      }
      i=a;                
   }
        return 0;   
}
