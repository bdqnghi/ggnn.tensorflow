
main()
{
      char s[100];
      scanf("%s",s);
      int a;
      int b[10000]={0};
      a=strlen(s);
      int i,j,k;
      for(i=0;i<a;i++)
      {               if(s[i]>='a'&&s[i]<='z')
                      s[i]=s[i]-'a'+'A';
                     
                      
      }
      int f=0;
      int t=0;
      for(i=f;i<a;i++)
      {
         f++;
         b[s[i]]++;
         if(s[i]!=s[i+1])
         {
         
         printf("(%c,%d)",s[i],b[s[i]]);
         b[s[i]]=0;
         }
        
         
      }
      
     }
