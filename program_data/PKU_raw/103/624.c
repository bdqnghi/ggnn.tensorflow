
main()
{
      int i,a[1000],x;
      char s[1001];
      scanf("%s",s);
      x=strlen(s);
      for(i=0;i<1000;i++)
      a[i]=1;
      for(i=1;i<=x;i++)
      {
                      if((s[i]-'A')==(s[i-1]-'A'-32))
                      a[s[i]-'A']++;
                      else if((s[i]-'A'-32)==(s[i-1]-'A'))
                      a[s[i]-'A'-32]++;
                      else if((s[i]-'0')==(s[i-1]-'0'))
                      {
                           if((s[i]-'0')<43)
                           a[s[i]-'A']++;
                           else 
                           a[s[i]-'A'-32]++;
                           }
                           
                      else
                      {
                          if((s[i-1]-'0')<43)
                          {
                          printf("(%c,%d)",s[i-1],a[s[i-1]-'A']);
                          a[s[i-1]-'A']=1;
                          }
                          else
                          {
                          printf("(%c,%d)",s[i-1]-'A'-32+'A',a[s[i-1]-'A'-32]);
                          a[s[i-1]-'A'-32]=1;
                          }
                          }
                          }
                          
                                             
                                             }