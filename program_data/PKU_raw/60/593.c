main()
{
      int su(int n);
      int m;
      scanf("%d",&m);
      int a,b;
      a=3,b=5;
      if(m<5)
      {printf("empty\n");}
      else 
      {
           do
           {
           if(su(a)&&su(b))
      {
           printf("%d %d\n",a,b);
      }
      a+=2;
      b+=2;
      }
          while(b<=m);
      }
}
      int su(int n)
      {
          int i;
          int p=1;
          for(i=2;i<n/2;i++)
          {
                            if(n%i==0)
                            {p=0;
                            break;}                    
          }
          return(p);
      } 