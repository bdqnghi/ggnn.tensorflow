int main()
{
      int n,a,b,c,d,e;
      scanf("%d",&n);
      if(n<5)
      {printf("empty");
       }
      else
      {
       for(a=5;a<=n;a+=2)
       {
          b=(int)sqrt(a);
          for(c=3;c<=b;c++)
          {
            if(a%c==0)
            {break;
            }
          }
          if(c>b)
          {
              d=(int)sqrt(a-2);  
              for(e=2;e<=d;e++)
              {
                if((a-2)%e==0)
                {break;
                }
              }
              if(e>d)
              {
                 printf("%d %d\n",a-2,a);
              }
          }
       }
      }  
      return 0;
}
