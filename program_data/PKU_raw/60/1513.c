

int sushu(int i)
{
    int j,y;
    y=0;
    for(j=2;j<i;j++)
    {
                     if(i%j==0)
                     {
                     
                     
                     
                     y=1;
                     break;
                     }
                     }
                     if(y==0)
                     return(1);
                     else
                     return(0);
                     }
                     
main()
{
      int sushu(int i);
      int n,i,a,b,x;
      x=0;
      scanf("%d",&n);
      
      for(i=2;i<=n-2;i++)
      {
                       a=sushu(i);
                       b=sushu(i+2);
                       
                       
                        if(a==1&&b==1)
                        {
                       printf("%d %d\n",i,i+2);
                       x=1;
                       }
                       }
                       if(x==0)
                       printf("empty");
                       
                       
                       }
