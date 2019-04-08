int main()
{
      char s[90];
      int i,n,j;
      
      scanf("%d",&n);
      gets(s);
      for (i=0;i<n;i++)
      {
          gets(s);
          if ((s[0]=='_') || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z'))
          {
              for (j=1;j<strlen(s);j++)
                  if ((s[j]=='_')||(s[j]>='a' && s[j]<='z')||(s[j]>='A' && s[j]<='Z')||(s[j]>='0' && s[j]<='9'))
                      continue;
                  else
                      break;
              if (j==strlen(s))
                  printf("1\n");
              else
                  printf("0\n");
          }
          else
              printf("0\n");
      }
}

