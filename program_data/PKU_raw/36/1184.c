void main()
{ char  s1[10],s2[10];int  a[128],b[128];
  int i,j,n,m;
  scanf("%s %s",s1,s2);
  m=strlen(s1);n=strlen(s2);
  if(m!=n) printf("NO");
   else
         {for(i=0;i<128;i++)
             { a[i]=0;b[i]=0;
               for(j=0;j<m;j++)
                  {if(i==s1[j])  a[i]++;
                  if(i==s2[j])  b[i]++;}
                  if(a[i]!=b[i])  break;  }
        if(i<127)  printf("NO");
       else if(a[127]!=b[127])  printf("NO");
        else printf("YES");}}
