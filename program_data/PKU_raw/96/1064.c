main()
{
      char c[110]={'\0'};
      gets(c);
      int i,a,b;
      if(c[1]=='\0')
      {
                    a=c[0]-'0';
                    printf("0\n%d",a);
      }
      else
      {
          for(i=0;c[i+1]!='\0';i++)
          {
                      if(i==0)a=(c[i]-'0')*10+c[i+1]-'0';
                      else a=a*10+c[i+1]-'0';
                      b=a/13;         
                      c[i]=b+'0';
                      a=a%13;                      
          }
          c[i]='\0';
          if(c[0]=='0'&&c[1]!='\0')
          {
                    for(i=0;c[i]!='\0';i++)
                    {
                                           c[i]=c[i+1];
                    }
          }
          printf("%s\n%d",c,a);
      }
}               
                               
               
                               
               
                               
              
                               
