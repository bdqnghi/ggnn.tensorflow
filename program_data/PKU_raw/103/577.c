main()
{
      char s1[1000],s2[1000];
      int i,n,j,sum=1;
      scanf("%s",s1);
      n=strlen(s1);
      for(i=0;i<=n-1;i++)
      {
                         if(s1[i]>='a'&&s1[i]<='z')
                         s2[i]=s1[i]-32 ;
                         if(s1[i]>='A'&&s1[i]<='Z')
                         s2[i]=s1[i];}
                         for(i=1;i<=n;i++)
                         {
                                           
                                             if(s2[i-1]==s2[i])
                                                  sum=sum+1;
                                                  
                                                  if(s2[i-1]!=s2[i])
                         {printf("(%c,%d)",s2[i-1],sum);
                                         sum=1; }    
                         }
                        
      }
