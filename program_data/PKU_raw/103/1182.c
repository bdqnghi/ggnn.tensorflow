main()
{
      char s[1000];
      scanf("%s",s);
      int length=strlen(s);
      int i,j=0;
      for(i=0;i<length;i++)
      if(s[i]>='a'&&s[i]<='z')
      s[i]+='A'-'a';
      int num[26];
      for(i=0;i<26;i++)
      num[i]=1;
      char mem[26]={'\0'};
      mem[0]=s[0];
      for(i=1;i<length;i++)
      {
                           if(s[i]==s[i-1])
                           num[j]++;
                           else
                           {j++;
                            mem[j]=s[i];
                            }
                            }
      int changdu=strlen(mem);
      for(j=0;j<changdu;j++)
      printf("(%c,%d)",mem[j],num[j]);
      }
      