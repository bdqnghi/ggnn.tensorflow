int main()
{
    int m,n,j,a,b,c,d;
    double i;
    scanf("%d",&b);
    d=1;
    for(m=2;m<=b;m++)
    {
                     a=1;
                     i=sqrt(m);
                     n=(int)i+1;
                     for(j=2;j<n;j++)
                     {
                                     if(m%j==0)
                                     {
                                               a=0;
                                               break;
                                      }
                      } 
                      if(a==1)c=m+2;
                      else c=4;
                      a=1;
                      i=sqrt(c);
                      n=(int)i+1;
                      for(j=2;j<n;j++)
                      {
                                      if(c%j==0)
                                      {
                                                a=0;
                                                break;
                                       }
                       } 
                       if(a==1&&c<=b)
                       {
                               printf("%d ""%d\n",m,c);
                               d=0;                                      
                        }
      } 
      if(d==1)printf("empty");
      return 0;
}                     
