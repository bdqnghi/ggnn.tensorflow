int main()
{
char s[1000];
int a,shang,yu,l,i,j,k;j=0;
scanf("%s",s);
l=strlen(s);
for(j=0;l>9;j++)
{a=0;
for(i=8;i>=0;i--)
{
a+=(s[i]-'0')*(int)pow(10,8-i);
}
shang=a/13;printf("%d",shang);
yu=a%13;
if(yu>=10)
{
s[0]=yu/10+'0';
s[1]=yu%10+'0';
for(k=2;k<=100;k++)
s[k]=s[k+7];
}
else if(yu>0)
{
s[0]=yu+'0';
for(k=1;k<=100;k++)
s[k]=s[k+8];
}
else if(yu==0)
{
for(k=0;k<=100;k++)
s[k]=s[k+9];
}
l=strlen(s);
}
a=0;
for(i=l-1;i>=0;i--)
{
a+=(s[i]-'0')*(int)pow(10,l-1-i);
}
shang=a/13;printf("%d\n",shang);
yu=a%13;
printf("%d",yu);
}