struct p
{
       char c;
       int x;
}p[1000];
main()
{
      char str[1100],i,L,j,s,t=0,count=0;
      scanf("%s",str);
      L=strlen(str);
      str[L]='\0';
      for(i=0;i<L;i++)
      {
                      if(str[i]>='a'&&str[i]<='z')
                      str[i]=str[i]-'a'+'A';
      }
      s=str[0];
      for(i=0;i<=L;i++)
      {
              if(str[i]==s)
              {
                           count++;
              }
              if(str[i]!=s&&str[i]!='\0')
              {
                           p[t].c=str[i-1];
                           p[t].x=count;
                           count=1;
                           s=str[i];
                           t++;
              }
              if(str[i]=='\0'&&str[i-1]!='\0'&&str[i]!=s)
              {  
                 p[t].c=str[i-1];
                 p[t].x=count;
                 t++;
                 break;
              }
      }
      for(i=0;i<t;i++)
      printf("(%c,%d)",p[i].c,p[i].x);
     
      
}