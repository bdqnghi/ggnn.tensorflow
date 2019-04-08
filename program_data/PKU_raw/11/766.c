int m(int n)
{
    if (n%100!=0)
    {
                 if(n%4==0)
                 return(1);
                 else
                 return(0);
    }
    else
    {
        if(n%400==0)
        return(1);
        else
        return(0);
    }
    
}
main()
{
      int a,b,c,x=0,i;
      scanf("%d %d %d",&a,&b,&c);
      if(m(a)==1)
      {
                 int d[]={31,29,31,30,31,30,31,31,30,31,30};
                 for(i=1;i<b;i++)
                 x=x+d[i-1];
                 x=x+c;
      }
      else
      {
                 int d[]={31,28,31,30,31,30,31,31,30,31,30};
                                  for(i=1;i<b;i++)
                 x=x+d[i-1];
                 x=x+c;
      }
      printf("%d",x);
      getchar();
      getchar();
}
