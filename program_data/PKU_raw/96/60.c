main()
{
      int a,b,c,d,e,i;
      char f[1000];
      char g[1000];
      scanf("%s",f);
      a=strlen(f);
      if (a==1)
      {
               printf("0\n");
               printf("%s",f);
      }
      else
      {
      for (i=0;i<a;i++)
      {
          f[i]=f[i]-'0';
      }
      b=f[0];
      for (i=0;i<a-1;i++)
      {
          b=b*10+f[i+1];
          g[i]=b/13;
          b=b%13;
      }
      if (g[0]==0 && a>2)
      {
                  for (i=0;i<a-1;i++)
                  {
                      g[i]=g[i+1];
                  }
                  g[i-1]='\0';
                  for (i=0;i<a-2;i++)
                  {
                      g[i]=g[i]+'0';
                  }
      }
      else if (g[0]==0 && a<=2)
      {
           g[0]=0+'0';
           g[1]='\0';
      }
      else
      {
          g[a-1]='\0';
          for (i=0;i<a-1;i++)
          {
              g[i]=g[i]+'0';
          }
      }
      printf("%s\n",g);
      printf("%d\n",b);
      }
      getchar ();
      getchar ();
}
      
          
          
          
