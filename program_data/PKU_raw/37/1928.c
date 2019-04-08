main()
{
      int t,i,j,k[26],x;
      char c[10000];
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
        scanf("%s",c);
        memset(k,0,sizeof(k));
        x=strlen(c);
        for(j=0;j<x;j++){
                         k[c[j]-'a']++;
                         }
        for(j=0;j<x;j++)
        {
          if(k[c[j]-'a']==1)
          {printf("%c\n",c[j]);
          break;}
          if(j==x-1)
          printf("no\n");
          }
      }

}
