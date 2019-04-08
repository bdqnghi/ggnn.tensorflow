main()
{
      char a[300];
      char b[100],c[100];
      gets(a);
      gets(b);
      gets(c);
      int x1,x2,x3,i,j,k;
      x1=strlen(a);
      x2=strlen(b);
      x3=strlen(c);
      /*puts(a);
      puts(b);
      puts(c);*/
      for(i=0;i<=x1-x2;i++)
      {
          for(j=0;j<=x2-1;j++)
          {
              if(b[j]!=a[i+j])
              {
                  break;
              }
          }
          //printf("%d\n",j);
          if(j==x2)
          {
              for(k=0;k<=x2-1;k++)
              {
                  a[i+k]=c[k];
              }
              break;
          }
      }
      puts(a);
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();        
}
