int f(int M,int N)
{
    int sum1,sum2,sum;
    if(M<0) return 0;
    if(M==0) return 1;
    else
    {
       if(N==1) return 1;
       else 
       {
         sum1=f(M,N-1);
         if(M==1) return 1;
         else 
         {
            sum2=f(M-N,N);
         }
       }
    }
    sum=sum1+sum2;
    return sum;
}
main()
{
   int n;
   scanf("%d",&n);
   int a[21],b[21];
   for(int i=0;i<n;i++)
   {
      scanf("%d %d",&a[i],&b[i]);
   }
   for(int j=0;j<n;j++)
   {
      printf("%d\n",f(a[j],b[j]));
   }
   getchar();
   getchar();
   getchar();
}
         
         