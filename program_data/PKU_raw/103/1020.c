main()
{
      int i,j,k,t;
      int a=1;
      char c[1001];
      scanf("%s",c);
      for(i=1;i<=1000;i++)
      {    
         if(c[i]>=65&&c[i]<97)
         {
             if(c[i]!=c[i-1]&&(c[i]!=c[i-1]-32))
             {
                 if(c[i-1]<97)
                 printf("(%c,%d)",c[i-1],a);
                 else
                 printf("(%c,%d)",c[i-1]-32,a);
                 a=1;
             }
             else
             {
                  a++;
             }
         }
         if(c[i]>=97&&c[i]<=122)
          {
              if(c[i]!=c[i-1]&&c[i]!=(c[i-1]+32))
              {
                  if(c[i-1]<97)
                  printf("(%c,%d)",c[i-1],a);
                  else
                  printf("(%c,%d)",c[i-1]-32,a);
                  a=1;
             }
             else
             {
                  a++;
             }
          }
          if(c[i]=='\0')
          {
              if(c[i-1]<97)
              printf("(%c,%d)",c[i-1],a);
              else
              printf("(%c,%d)",c[i-1]-32,a);
              break;
          }
    }
      
}
      