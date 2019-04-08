int main()
{
   int n;
   int sum=0;
   scanf("%d",&n);
   while(n>0)   
  {
       if(n%7==0 || n%10==7 || n/10==7) 
       {
         sum=sum;
        }
      else if(n%7!=0&&n%10!=7&&n/10!=7)
       { 
         sum = sum+n*n;
       }
         n=n-1;
        
  }
   printf("%d",sum);
   return 0;
}