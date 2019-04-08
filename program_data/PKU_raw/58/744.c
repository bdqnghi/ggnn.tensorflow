int f(char c)
{
 if(c>='a'&&c<='z') return 1;
 if(c>='A'&&c<='Z') return 1;
 if(c=='_') return 1;
 else return 0;
}
main()
{
 int a,n;
 int i;
 scanf("%d",&n);
 char str1[2];
 gets(str1);
 while(n--)
 {
  char str[100]={""};
  gets(str);
  int len=strlen(str);
  if(f(str[0])==1)
  {
   for(i=1;str[i]!='\0';i++)
   if((str[i]>='0'&&str[i]<='9')||f(str[i])==1) continue;
   else break;
   if(i==len) printf("%d\n",1);
   else printf("%d\n",0);
  }
  else
  printf("%d\n",0);
 }
}