main()
{
      char s1[101],s2[101];
      int i,j,p,k;
      for(j=0;j<101;j++) s1[j]='\0';
      gets(s1);
      k=strlen(s1)-1;
      for(i=strlen(s1)-1;i>=0;i--)
      {
            if(s1[i]==' ')
            {
                  for(j=0;j<101;j++) s2[j]='\0';
                  for(p=0;p<k-i;p++) s2[p]=s1[i+1+p];
                  printf("%s ",s2);
                  k=i-1;
            }
            else if(i==0)
            { 
                  for(j=0;j<101;j++) s2[j]='\0';
                  for(p=0;p<=k;p++) s2[p]=s1[p];
                  printf("%s",s2);
            }
      }
}

