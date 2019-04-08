main()
{
      int n,c=0,f=1;
      scanf("%d",&n);
      char  p[1000][41];  
      for(int i=0;i<n;i++)
      { 
              scanf("%s",p[i]); 
      }
      for(int j=0;j<n;j++)
      { 
                   c=c+strlen(p[j]);
                   if(c<=80)
                   {
                            if(f==1)
                            {
                              printf("%s",p[j]); 
                              f=0;
                              } 
                              else
                              printf(" %s",p[j]);
                          c++; 
                   }
                   else
                   {
                       printf("\n");
                       f=1;
                       c=0;
                       j--;
                   } 
      }
      getchar();
      getchar();
}
