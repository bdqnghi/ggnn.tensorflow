
main()
{
     int i,j,k,n1,n2,m,d;
     char s1[81],s2[81];
     gets(s1);
     gets(s2);
     n1=strlen(s1);
     n2=strlen(s2);
     for(i=0;i<n1;i++)
     {
                      if(s1[i]>'A'&&s1[i]<'Z')
                      s1[i]=s1[i]-'A'+'a';
                      }
     for(i=0;i<n2;i++)
     {
                      if(s2[i]>'A'&&s2[i]<'Z')
                      s2[i]=s2[i]-'A'+'a';
                      }
     k=strcmp(s1,s2);
     if(k==0)
     printf("=");
     else if(k>0)
     printf(">");
     else
     printf("<");
     
}
