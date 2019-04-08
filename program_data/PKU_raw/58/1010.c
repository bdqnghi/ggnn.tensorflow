main(){
int n;
scanf("%d",&n);
getchar();
for (int i=1;i<=n;i++)
{
char s[100];
gets(s);
int len=strlen(s);
int flag=(s[0]=='_'||(s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z'));
for (int j=1;j<len;j++)
{
flag&=(s[j]=='_'||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9'));
}
printf("%d\n",flag);
}
getchar();getchar();getchar();
}
