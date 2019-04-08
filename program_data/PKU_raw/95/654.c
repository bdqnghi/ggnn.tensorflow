void main()
{
char a[100],b[100];
int la,lb,i,sa=0,sb=0;
gets(a);
gets(b);
la=strlen(a);
lb=strlen(b);
for(i=0;i<la;i++)
{
   if(a[i]>96 && a[i]<123) sa+=a[i];
   else if(a[i]>64 && a[i]<91) sa+=a[i]+32;
}
for(i=0;i<lb;i++)
{
   if(b[i]>96 && b[i]<123) sb+=b[i];
   else if(b[i]>64 && b[i]<91) sb+=b[i]+32;
}
if(sa>sb) printf(">");
else if(sa<sb) printf("<");
else printf("=");
}
