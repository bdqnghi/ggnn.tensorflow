int fun(int n);
main()
{
   int n;
   scanf("%d",&n);
   int num;
   for(int i=0;i<n;i++)
   {
      scanf("%d",&num);
      printf("%d\n",fun(num));
   }  
   getchar();
   getchar();
}
int fun(int n)
{
    if(n==1||n==2)  return 1;
    else 
    {
       int sum=0;
       sum=fun(n-1)+fun(n-2);
       return sum;  
    } 
}
