main()
{
      char a[256],b[256],c[256];
      scanf("%s %s %s",a,b,c);
      int i,j,k,nb,nc,count;
      nb=0;
      nc=0;
      for (i=0;b[i]!='\0';i++)
      {
          nb++;
      }
      for (i=0;c[i]!='\0';i++)
      {
          nc++;
      }
      for (i=0;a[i+1]!='\0';i++)
      {
          if (a[i]==b[0])
          {   
              count=0;
              k=i;
              for (j=0;j<nb;j++)
              {
                  if (a[k+j]==b[j])
                  {
                            count++;
                  }
                  else 
                  {
                       break;
                  }
              }
              if (count==nb)
              {
                   for (j=0;j<nc;j++)
                   {
                      a[k+j]=c[j];
                   }
                   break;
              }
          }
      }
      puts(a);
      getchar();getchar();getchar();getchar();
}
