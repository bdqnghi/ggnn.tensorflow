main()
{
      int t=-1,u=-1,e=-1,c=0;
      char st[300]={'0'};
      char su[300]={'0'};
      char re[300]={'0'};
      int i,j,m=0,b=1;
      for(i=0;st[i-1]!='\n';i++)
      {
          scanf("%c",&st[i]);
      }
      for(i=0;su[i-1]!='\n';i++)
      {
          scanf("%c",&su[i]);
          u++;
      }
      for(i=0;re[i-1]!='\n';i++)
      {
          scanf("%c",&re[i]);
          e++;
      }
      for(i=0;st[i]!='\0';i++)
      {
          
          if(st[i]==su[0])
          {
              m=i;
              b=1;
              for(j=1;j<u;j++)
              {
                  if(su[j]!=st[m+j])
                  {
                      b=0;
                      break;
                  }
              }
              if(b==1)
              {
                   for(i=m;i<m+u;i++)
                   st[i]=re[i-m];
                   c=1;
              }
          if(c==1)
          break;
          }
      
      }
          printf("%s",st);

}
