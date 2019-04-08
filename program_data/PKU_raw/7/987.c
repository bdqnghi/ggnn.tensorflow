int judge(int i,char s[800],char sub[800])
{
    /*printf("%d\n",i);
    printf("%s\n",sub);*/
    int j,k;
    for (j=i;j<=i+strlen(sub)-1;j++)
    if (s[j]!=sub[j-i]) break;    
    if (j==i+strlen(sub)) return 1;
    else return 0;
}
void change(int i,char s[800],char sub[800],char r[800])
{
     int l,ls,lr,j,k;
     l=strlen(s);
     ls=strlen(sub); lr=(strlen(r));
     /*printf("%d",i);*/
     if (ls<=lr) { k=lr-ls; 
                   for (j=l+k+1;j>=i+lr;j--) s[j]=s[j-k];
                   for (j=i;j<=i+lr-1;j++)
                   s[j]=r[j-i];
                   }
     else {k=ls-lr;
           for (j=i+lr;j<=l-k+1;j++) s[j]=s[j+k];
           for (j=i;j<=i+lr-1;j++)
           s[j]=r[j-i];
           }
}
main()
{
      char s[800],sub[800],r[800];
      int l,i;
      scanf("%s",s);
      scanf("%s",sub);
      scanf("%s",r);
      l=strlen(s);
      for (i=0;i<l;i++)
      if ((s[i]==sub[0])&&(judge(i,s,sub)>0)) {change(i,s,sub,r); break;}
      puts(s);
}
