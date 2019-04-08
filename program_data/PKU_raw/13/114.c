int main()
{
      int a,b,c[100000],d,e;
      e=0; 
      scanf("%d",&a);
     for(b=1;b<=a;b++)
     scanf("%d",&c[b]);
     printf("%d",c[1]);
     b=2;
     while(b<=a)
     {
                e=0;
      for(d=1;d<b;d++)
      {
        if(c[b]==c[d])
        e=1;
        else 
        e=e;
        }
          if(e==0)
          printf(" %d",c[b]);
          b=b+1;
          }
          getchar();
          getchar();
          }