int main()
{
int n,i,l;
char s[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 scanf("%s",&s);
 l=strlen(s);
 if(s[l-1]=='g'){s[l]=0;s[l-1]=0;s[l-2]=0;s[l-3]=0;}
 else {s[l]=0;s[l-1]=0;s[l-2]=0;}
 l=strlen(s);
 printf("%s\n",s);
}
return 0;
}