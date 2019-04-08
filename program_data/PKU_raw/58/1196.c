main()
{
int n,i,j,len;
int a[100]={0};
char s[100]={0};

scanf("%d\n",&n);
fflush(stdin);
for(i=0;i<n;i++)
{
gets(s);
len = strlen(s);
j=0;
if(s[0]=='_'||('a'<=s[0]&&s[0]<='z')||('A'<=s[0]&&s[0]<='Z'))
{ 
 j = 1;
 while(j<len)
 {
             if(s[j]=='_'||('a'<=s[j]&&s[j]<='z')||('A'<=s[j]&&s[j]<='Z')||('0'<=s[j]&&s[j]<='9'))
  j++;
 else break;
  }
}
if(j==len)
a[i]=1;
else a[i]=0;
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}

}