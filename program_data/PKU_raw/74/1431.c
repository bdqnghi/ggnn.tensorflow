
int sushu(int x)
{
    int i=2;
    int s=0;
    while (i<x)
    {
         if  ((x%i)==0)
         {
             s++;
             x=x/i;
         }
         else
         i++;
    }
    
    if  (s==0)
    return 1;
    else
    return 0;
}

int huiwenshu(int x)
{
    int y=0;
    int w;
    int ori;
    ori=x;
    
    while  (x>0)
    {
           w=x%10;
           y=y*10+w;
           x=(x-w)/10;
    }
    if  (ori==y)
    return 1;
    else
    return 0;
}
       
    

main()
{
      int m,n;
      int s=0;
      
      scanf("%d%d",&m,&n);
      while  (m<=n)
      {
           if  (sushu(m))
           {
               if  (huiwenshu(m))
               {
                   if (s==0)
                   {printf("%d",m);s++;}
                   else
                   printf(",%d",m);
               }
           }
           m++;
      }
      
      if  (s==0)
      printf("no");

}
      
