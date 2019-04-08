main()
{     int n,i,j,flag,t;
      char s[10000],cc;
      scanf("%d",&n);
      scanf("%c",&cc);
      for (t=0;t<n;t++)
      {
          gets(s);
          for (i=0;s[i]!='\0';i++)
           { flag=0;
             for (j=0;s[j]!='\0';j++)
                if ((s[i]==s[j])&&(i!=j)) {flag=1; break;}
             if (flag==0) {printf("%c\n",s[i]); break;}
           }
           if (s[i]=='\0') printf("no\n");
      }
}
