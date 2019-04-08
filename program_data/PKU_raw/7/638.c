main()
{
      char a[100]={0},b[100]={0},c[100]={0};
      gets(a);
      gets(b);
      gets(c);
      int lb,la;
      lb=strlen(b);
      la=strlen(a);
      int count=0;
      
      for(int i=0;i<=la-lb;i++)
      {
              count=0;
              for (int j=0;j<lb;j++)
              {
                  if(a[i+j]!=b[j])
                  {
                  count=1;
                  break;
                  }
              }
              //if(i!=0 && a[i-1]!=' ' )
              //count=1;
              if(count==0 )
              {
                          a[i]=1;
                          for(int j=1;j<lb;j++)
                          a[i+j]=2;
break;
              }        
      }
      for(int i=0;i<la;i++)
      {
              if(a[i]==1) printf("%s",c);
              if(a[i]==2); 
              if(a[i]!=2 && a[i]!=1)
              printf("%c",a[i]);
      }
}
