main()
{
      int t;
      scanf("%d",&t);
      char a[100000];
      int b[100000];
      for(int i=0;i<t;i++)
      {
              for(int x=0;x<100000;x++)
              {
                      a[x]=0;
                      b[x]=0;
              }
              scanf("%s",a);
              int len=strlen(a);
              int j;
              for(j=0;j<len;j++)
              {
                      for(int k=j+1;k<len;k++)
                      { 
                              if(a[j]==a[k])
                              {
                                       b[j]++;
                                       b[k]++;
                              }
                      }
                      if(b[j]==0)
                      {
                                         printf("%c\n",a[j]);
                                         break;  
                      }
              }
              if(j==len)
              printf("no\n");
      }
}    

