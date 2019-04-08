main()
{
   int t,i,l,j;
   char string[100000];
   int count[26];
   scanf("%d",&t);
   for(int m=0;m<t;m++)
   {
      int count[26]={0};
      scanf("%s",string);
      l=strlen(string);
      for(j=0;j<l;j++)
      {
         for(i=0;i<26;i++)
         {
            if(string[j]==i+'a')
               count[i]++;
         }
      }
      for(j=0;j<l;j++)
      {
          if(count[string[j]-'a']==1)
          {
            printf("%c\n",string[j]);
            break;
          }  
      }
      if(j==l)
        printf("no\n");
   }
   getchar();
   getchar();
} 