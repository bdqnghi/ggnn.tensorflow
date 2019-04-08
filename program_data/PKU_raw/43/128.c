int ss(int a);

main()
{
      int m;
      scanf("%d",&m);
      int a,b;
      int i,j;
      for(a=3;a<=m/2;a++)
      {
          i=ss(a);
          if(i==0)
          {
              b=m-a;
              j=ss(b);
              if(j==0)
              printf("%d %d\n",a,b);    
          }                  
      }
      return 0;
}

int ss(int a)
{
      int i=2,k=0;
      for(i=2;i<=(a/2);i++)
          if((a%i)==0)
              k++;
      return k;    
}
