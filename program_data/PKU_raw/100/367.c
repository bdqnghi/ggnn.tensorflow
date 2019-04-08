void main()
{
 char s[301];
 int g[26],i,f=1;
 for (i=0;i<=25;i++)
   g[i]=0;
 gets(s);
 for (i=0;i<=strlen(s)-1;i++)
   if ((s[i]>='a')&(s[i]<='z'))
     g[s[i]-97]++;
 for (i=0;i<=25;i++)
   if (g[i]!=0)
     {
     printf("%c=%d\n",i+97,g[i]);
     f=0;
     }
 if (f==1)
   printf("No\n");
}