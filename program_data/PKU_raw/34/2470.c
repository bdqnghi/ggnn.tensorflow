main()
{
      int a,b,c;
      scanf("%d\n",&a);
      for(;a>1;)
      {
              if(a%2==0) 
              {
                        a=a/2;
                        b=a*2;
                        printf("%d/2=%d\n",b,a);
              }
              else
              {
                  a=a*3+1;
                  c=(a-1)/3;
                  printf("%d*3+1=%d\n",c,a);
              }
      }
      printf("End");
      getchar();
      getchar();
}
                                 
                 
                