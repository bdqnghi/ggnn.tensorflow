main()
{
      char c[40];
      int a,b,x,i,l,k;
      scanf("%d %s %d",&a,c,&b);
      l=strlen(c);
      if (c[0]=='0')
        printf("0\n");
      else
        {
                      for (i=0;i<l;i++)
                      {
                          if (c[i]>='A'&&c[i]<='Z')
                              c[i]=c[i]-'A'+'a';
                      }
                      x=0;
                      int d;
                      for(i=0;i<l;i++)
                      {
                            if (c[i]>='a')  
                               d=c[i]-'a'+10;
                            else
                               d=c[i]-'0';
                             x=d+x*a;
                      }    
                      char  e[40];
                      for(k=0;x!=0;k++)
                      {
                                       e[k]=x%b;
                                       x=x/b;
                      }
                          e[k]='\0';
                         char f[40];
                         for(i=0;i<k;i++)
                         {
                                  if (e[i]<10)
                                  f[k-1-i]=e[i]+'0';
                                  else
                                  f[k-1-i]=e[i]+'A'-10;
                         }
                         f[k]='\0';
                         printf("%s",f);
}                         
                         
}
