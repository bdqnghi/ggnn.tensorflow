void main()
{
char c,text[500];int i,s=0,k[500][500],t=0,q=0;
gets(text);
for(c='A';c<='Z';c++)
{  for(i=0;i<strlen(text);i++)
   if(text[i]==c)    {q=1;t=1;s++;}
   if(t==1)   printf("%c=%d\n",c,s);
     t=0;s=0;}
for(c='a';c<='z';c++)
{  for(i=0;i<strlen(text);i++)
   if(text[i]==c)    {t=1;q=1;s++;}
   if(t==1)   printf("%c=%d\n",c,s);
    t=0;s=0;}
if(q==0)  printf("No");
}