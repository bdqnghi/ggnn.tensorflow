main()
{
      int reverse(int num);
      int a[6],i;
      for(i=0;i<=5;i++)
      scanf("%d",&a[i]);
      for(i=0;i<=5;i++)
      {
                           if(i==0) 
                              printf("%d",reverse(a[i]));
                              else
                              printf("\n%d",reverse(a[i]));
                              }
      getchar();
      getchar();
}
int reverse(int num)
{
    int a=num,x,b=0;
    for(;a!=0;)
    {
           x=a%10;
           a=a/10;
           b=x+b*10;
         
     }
       return(b);
}
