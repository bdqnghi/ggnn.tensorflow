int f(int a)
{
    if((a%4==0&&a%100!=0)||(a%400==0))
    return 0;
    else
    return 1;
}
main()
{
      int n;
      scanf("%d",&n);
      int a,b,c,d=0,k;
      for(int i=1;i<=n;i++)
      {
              d=0;
              scanf("%d %d %d",&a,&b,&c);
              if(f(a)==0)
              {
              if(c>b)
              {k=c;c=b;b=k;}
                      while(b>c)
                      {
                                if(c==11)
                                {d=d+2;}
                                if(c==10)
                                {d=d+3;}
                                if(c==9)
                                {d=d+2;}
                                if(c==8)
                                {d=d+3;}
                                if(c==7)
                                {d=d+3;}
                                if(c==6)
                                {d=d+2;}
                                if(c==5)
                                {d=d+3;}
                                if(c==4)
                                {d=d+2;}
                                if(c==3)
                                {d=d+3;}
                                if(c==2)
                                {d=d+1;}
                                if(c==1)
                                {d=d+3;}
                                c++;
                      }
                      if(d%7==0)
                      printf("YES\n");
                      else
                      printf("NO\n");                 
              }
                   if(f(a)==1)
              {
              if(c>b)
              {a=c;c=b;b=a;}
                      while(b>c)
                      {
                                if(c==11)
                                {d=d+2;}
                                if(c==10)
                                {d=d+3;}
                                if(c==9)
                                {d=d+2;}
                                if(c==8)
                                {d=d+3;}
                                if(c==7)
                                {d=d+3;}
                                if(c==6)
                                {d=d+2;}
                                if(c==5)
                                {d=d+3;}
                                if(c==4)
                                {d=d+2;}
                                if(c==3)
                                {d=d+3;}
                                if(c==1)
                                d=d+3;
                                c++;
                      }
                      if(d%7==0)
                      printf("YES\n");
                      else
                      printf("NO\n");                 
              }
              
      }
}
