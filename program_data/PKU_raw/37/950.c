main()
{
      int t,i;
      
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
          int j,c=0;
          int lt[26]={0};
          char a[100000]={'\0'};
          scanf("%s",a);
          for(j=0;a[j]!='\0';j++)
             lt[a[j]-'a']++;
          for(j=0;a[j]!='\0';j++)
          {
              if(lt[a[j]-'a']==1)
              {
                  printf("%c\n",a[j]);
                  c++;
                  break;
              }
          }
          if(c==0)
              printf("no\n");
      }
}
              
